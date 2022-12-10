/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:59:18 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/14 19:01:00 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	my_first_char;

	my_first_char = 'z';
	while (my_first_char != 'a')
	{
		ft_putchar(my_first_char);
		my_first_char--;
	}
	ft_putchar(my_first_char);
}
