/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:39:32 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/29 13:29:07 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_skip_space(char *str);
int	ft_l(char *base);
int	ft_ba(char *base, int len);
int	ft_ch(char c, char *base);
int	ft_atoi_base(char *str, char *base);

void	ft_transformer(int nbr, int base_len, char *base, char *temp_returner)
{
	if (nbr < 0 && nbr != -2147483648)
	{
		temp_returner[ft_l(temp_returner)] = '-';
		nbr *= -1;
	}
	if (nbr == -2147483648)
	{
		temp_returner[ft_l(temp_returner)] = '-';
		ft_transformer(nbr / base_len * -1, base_len, base, temp_returner);
		ft_transformer(nbr % base_len * -1, base_len, base, temp_returner);
	}
	else if (nbr > base_len - 1)
	{
		ft_transformer(nbr / base_len, base_len, base, temp_returner);
		ft_transformer(nbr % base_len, base_len, base, temp_returner);
	}
	else
		temp_returner[ft_l(temp_returner)] = base[nbr % base_len];
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

void	ft_putnbr_base(int nbr, char *base, char *temp_returner)
{
	int	base_len;

	base_len = ft_l(base);
	if (base_len > 1 && ft_check_base(base, base_len) == 1)
		ft_transformer(nbr, base_len, base, temp_returner);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*temp_returner;
	char	*returner;
	int		i;
	int		from_to_dec;

	temp_returner = (char *)malloc(sizeof(char) * 33);
	i = -1;
	while (i++ > -2 && i < 33)
		temp_returner[i] = '\0';
	from_to_dec = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(from_to_dec, base_to, temp_returner);
	returner = (char *)malloc(sizeof(char) * ft_l(temp_returner));
	i = 0;
	while (temp_returner[i] != '\0')
	{
		returner[i] = temp_returner[i];
		i++;
	}
	free (temp_returner);
	return (returner);
}
