/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:08:56 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/14 19:08:20 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;

	i = 0;
	while (i < 10000)
	{
		if (i / 100 < i / 10 % 10 && i / 10 % 10 < i % 10)
		{
			ft_putchar(i / 100 + '0');
			ft_putchar(i / 10 % 10 + '0');
			ft_putchar(i % 10 + '0');
			if (i != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
