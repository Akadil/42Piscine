/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:28:17 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/27 18:04:00 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h> 

void	ft_insert_data(char **data, char *container, int beg, int mid, int pos)
{
	int	i;  // index to track what are we inserting 
	int	j;  // index to track our big string of dictionary

	i = beg;
	j = 0;
	// insert the digit
	while (i < mid)
	{
		data[pos][j] = container[i];
		j++;
		i++;
	}
	i += 2;
	// insert the letters 
	while (container[i] != '\n')
	{
		data[pos][j] = container[i];
		i++;
		j++;
	}
	data[pos][j] = '\0';
}

void	ft_data_maker(char **data, char *container)
{
	int	i;  // index to track line in dictionary. Ex: 0: zero, 1: one
	int	j;  // index to track char in string. Ex: "0: zero\n1: one\n..."
	int	begin;  // index to track beginning of the one line 
	int	middle;  // index to track middle of the one  line

	i = 0;
	j = 0;
	middle = 0;
	// By this we traverse through all lines in dict
	while (i < 41)
	{
		begin = j;
		// by this while we traverse through char of one line
		while (container[j] != '\n')
		{
			if (container[j] == ':')
				middle = j;	
			j++;
		}
		// before assigning values to our multidimensional array, we
		// have to firstly create it. This is the way to create
		data[i] = (char*)malloc(j - begin - 1);

		// with this function we are going to insert our data(0, zero, 1, )
		// to our multidimensional array
		ft_insert_data(data, container, begin, middle, i);
		i++;
		j++;
	}
	data[i] = '\0';
}

int	ft_strlen(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
		i++;
	return (i);
}

void	ft_print_digit(char **data, int ind)
{
	int	i;

	i = 0;
	while (data[ind][i])
	{
		if (!('0' <= data[ind][i] && data[ind][i] <= '9'))
			write(1, &data[ind][i], 1);
		i++;
	}
}

void	ft_print_0_999(char *nbr, char **data)
{
	int	len;

	len = ft_strlen(nbr);
	ft_print_digit(data, nbr[len - 3] - 48);
	write(1, " ", 1);
	ft_print_digit(data, 28);
	write(1, " ", 1);
	if (nbr[len - 2] >= '2')
	{
		ft_print_digit(data, nbr[len - 2] - 48 + 18);
		if (nbr[len - 1] - 48 != 0)
		{
			write(1, " ", 1);
			ft_print_digit(data, nbr[len - 1] - 48);
		}
	}
	else
		ft_print_digit(data, nbr[len - 1] - 48 + 10);
}

int	main(int argc, char *argv[])
{
	int	fd;
	int	sz;
	// save all information in one big string 
	char	*container = (char*)malloc(10000);
	// create a container(table) for our dictionary
	char	**data = (char**)malloc(sizeof(char*) * (41 + 1));
	char	*nbr = (char*)malloc(sizeof(char) * 7);

	if (data == NULL || nbr == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}

	fd = open("numbers.dict", O_RDONLY);
	sz = read(3, container, 10000);
	if (fd > 0 && sz > 0)
		// this function analyze the big string and insert the data to 
		// multidimensional array(table)
		ft_data_maker(data, container);

	if (argc > 0)
		ft_print_0_999(argv[1], data);

	return (0);
}
