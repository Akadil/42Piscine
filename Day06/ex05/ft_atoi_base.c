/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:22:11 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 17:27:55 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_skip_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		{
			i++;
			continue ;
		}
		if (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}

int	ft_l(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_ba(char *base, int len)
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

int	ft_ch(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	ret;
	int			sign;
	int			i;

	ret = 0;
	sign = 1;
	i = ft_skip_space(str);
	while (str[i] != '\0' && ft_l(base) > 1 && ft_ba(base, ft_l(base)) == 1)
	{
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (ft_ch(str[i], base) != -1)
		{
			ret = ret * ft_l(base) + ft_ch(str[i], base);
			i++;
		}
		return (ret * sign);
	}
	return (ret * sign);
}
