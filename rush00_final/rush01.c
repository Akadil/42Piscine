/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etanguy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:07:05 by etanguy           #+#    #+#             */
/*   Updated: 2022/08/14 18:00:43 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	affichex(int x, int nb)
{
	int	b;

	b = 0;
	while (x > b)
	{
		if (b == 0)
		{
			if (nb == 0)
				ft_putchar('/');
			else
				ft_putchar('\\');
		}
		else if (x - 1 == b)
		{
			if (nb == 0)
				ft_putchar('\\');
			else
				ft_putchar('/');
		}
		else
			ft_putchar('*');
		b++;
	}
}

void	affichey(int y, int x)
{
	int	b;
	int	i;

	i = 0;
	b = 0;
	while (y > i)
	{
		while (x > b)
		{
			if (b == 0 || b == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		b = 0;
		i++;
	}
}

void	rush(int x, int y)
{
	int	nb;

	if (x <= 0 || y <= 0)
		return ;
	nb = 0;
	if (y > 0)
		affichex(x, nb);
	if (y > 1)
		ft_putchar('\n');
	nb++;
	if (y > 2)
	{
		y -= 2;
		affichey(y, x);
		y += 2;
	}
	if (y > 1)
		affichex(x, nb);
	ft_putchar('\n');
}
