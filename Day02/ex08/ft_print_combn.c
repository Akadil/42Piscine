/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:13:27 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/17 16:46:20 by akalimol         ###   ########.fr       */
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
	int	k;

	if (a == -1)
	{
		return (0);
	}
	power_container = 1;
	k = 0;
	while (k < a)
	{
		power_container = power_container * 10;
		k++;
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
		num++;
	}
	return (num);
}

void	ft_putnbr(int nb, int n_size)
{
	int	container_to_send;
	int	my_num_size;
	int	ascii_num;
	int	n_zeros;

	my_num_size = ft_identify_size_int(nb);
	n_zeros = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		container_to_send = 45;
		write(1, &container_to_send, 1);
	}
	while (n_zeros < n_size - my_num_size)
	{
		write(1, "0", 1);
		n_zeros++;
	}
	n_zeros = my_num_size;
	while (n_zeros > 0)
	{
		ascii_num = nb / ft_power_of_ten(n_zeros - 1) % 10 + 48;
		write(1, &ascii_num, 1);
		n_zeros--;
	}
}

// Goal: to check the numer for requirements
// ----------------------------------------
// input: n is number, b is its size
// output: 1 if ok
int	ft_condition_satisfied(int n, int b)
{
	int	new_n;
	int	num_test;
	int	cond;
	int	m;

	new_n = n;
	num_test = 10;
	cond = 1;
	m = 0;
	while (m < b)
	{
		if (new_n % 10 >= num_test)
		{
			cond = 0;
		}
		num_test = new_n % 10;
		new_n = new_n / 10;
		m++;
	}
	return (cond);
}


void	ft_print_combn(int n)
{
	char	c;
	int		i;

	i = ft_power_of_ten(n - 2);
	while (i < ft_power_of_ten(n))
	{
		if (ft_condition_satisfied(i, n) == 1)
		{	
			ft_putnbr(i, n);
			if (i / ft_power_of_ten(n - 1) % 10 == 10 - n)
				break ;
			c = ',';
			write(1, &c, 1);
			c = ' ';
			write(1, &c, 1);
		}	
		i++;
	}
}
