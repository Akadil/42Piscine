/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:38:27 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 21:19:34 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putdigit(int n)
{
	char	c;

	c = n + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == -2147483648)
	{	
		write (1, "-2147483648", 11);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putdigit(nb);
	}
}

char	ft_check_operator(char *str)
{
	if (str[0] == '\0' || str[1] != '\0')
		return (0);
	if (str[0] == '+')
		return ('+');
	if (str[0] == '-')
		return ('-');
	if (str[0] == '*')
		return ('*');
	if (str[0] == '/')
		return ('/');
	if (str[0] == '%')
		return ('%');
	return (0);
}

void	ft_main2(int num1, int num2, char *str)
{
	if (*str == '+')
		return (num1 + num2);
	if (*str == '-')
		return (num1 - num2);
	if (*str == '*')
		return (num1 * num2);
	if (*str == '/')
		return (num1 / num2);
	return (num1 % num2);
}

int	main(int argc, char *argv[])
{
	int	num1;
	int	num2;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	if (ft_check_operator(argv[2]) == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (argv[2][1] == 0 && argv[2][0] == '/' && num2 == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	if (argv[2][1] == 0 && argv[2][0] == '%' && num2 == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	ft_putnbr(ft_main2(num1, num2, ft_check_operator(argv[2])));
	write(1, "\n", 1);
	return (0);
}
