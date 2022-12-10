/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:01:49 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/27 19:04:39 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_insert_data(char **data, char *container, int beg, int mid, int pos)
{
	int	i;
	int	j;
	
	i = beg;
	j = 0;
	while (i < mid)
	{
		data[pos][j] = container[i];
		j++;
		i++;
	}
	i += 2;
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
	int	i;
	int	j;
	int	begin; 
	int	middle;

	i = 0;
	j = 0;
	middle = 0;
	while (i < 41)
	{
		begin = j;
		while (container[j] != '\n')
		{
			if (container[j] == ':')
				middle = j;	
			j++;
		}
		data[i] = (char*)malloc(j - begin - 1);
		ft_insert_data(data, container, begin, middle, i);
		i++;
		j++;
	}
	data[i] = '\0';
}

int	ft_dict_size(char *container)
{
	int	i;

	i = 0;
	while (container[i])
		i++;
	return (i++);
}
