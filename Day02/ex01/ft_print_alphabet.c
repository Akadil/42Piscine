/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:57:58 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/14 18:58:43 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	my_first_char;

	my_first_char = 'a';
	while (my_first_char != 'z')
	{
		ft_putchar(my_first_char);
		my_first_char = my_first_char + 1;
	}
	ft_putchar(my_first_char);
}
