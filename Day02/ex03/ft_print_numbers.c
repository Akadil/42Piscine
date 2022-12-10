/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:01:44 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/14 19:02:33 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{	
	char	first_number;

	first_number = '0';
	while (first_number != '9')
	{
		ft_putchar(first_number);
		first_number = first_number + 1;
	}
	ft_putchar(first_number);
}
