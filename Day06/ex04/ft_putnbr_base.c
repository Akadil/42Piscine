/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:29:42 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 16:21:45 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_transformer(int nbr, int base_len, char *base)
{
	if (nbr < 0 && nbr != -2147483648)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_transformer(nbr / base_len * -1, base_len, base);
		ft_transformer(nbr % base_len * -1, base_len, base);
	}
	else if (nbr > base_len - 1)
	{
		ft_transformer(nbr / base_len, base_len, base);
		ft_transformer(nbr % base_len, base_len, base);
	}
	else
		write(1, &base[nbr % base_len], 1);
}

int	ft_check_base(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (9 <= base[i] && base[i] <= 13))
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_return_base_len(char *base)
{
	int	i;

	if (!base)
		return (0);
	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_return_base_len(base);
	printf("(%d)", base_len);
	if (base_len > 1 && ft_check_base(base, base_len) == 1)
		ft_transformer(nbr, base_len, base);
}
