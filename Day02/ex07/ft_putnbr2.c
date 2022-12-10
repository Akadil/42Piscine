/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:49:33 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/14 22:00:43 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Goal: mathematical expression "power of ten"
// ------------------------------------------
// input: some number
// output: 10 to the power of some number. 10^a
int	ft_power_of_ten(int a)
{
	int	power_container;
	int	i;

	power_container = 1;
	i = 0;
	while (i < a)
	{
		power_container = power_container * 10;
		i++;
	}
	return (power_container);
}

// Goal: identify the size of integer. ex: 123 is 3, 45632 is 5
// --------------------------
// input: int b
// ouput: its size
int	ft_identify_size_int(int b)
{
	int	num;

	num = 0;
	while (b / ft_power_of_ten(num) != 0)
	{
		num ++;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	int	my_num;
	int	container_to_send;
	int	my_num_size;
	int	ascii_num;
	int	j;

	container_to_send = 45;
	my_num = nb;
	if (nb < 0)
	{
		my_num = my_num * -1;
		write(1, &container_to_send, 1);
	}
	my_num_size = ft_identify_size_int(my_num);
	j = my_num_size;
	while (j > 0)
	{
		ascii_num = my_num / ft_power_of_ten(j - 1) % 10 + 48;
		write(1, &ascii_num, 1);
		j--;
	}
}
