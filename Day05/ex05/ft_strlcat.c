/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:24:10 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 15:41:44 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

void	ft_adder1(char *src, char *dest, int dest_len)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
}

void	ft_adder2(char *src, char *dest, int dest_len, int size)
{
	int	i;

	i = 0;
	while (dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_len(dest);
	src_len = ft_len(src);
	if (size <= dest_len)
		return (src_len + size);
	if (src_len + dest_len + 1 < size)
		ft_adder1(src, dest, dest_len);
	else
		ft_adder2(src, dest, dest_len, size);
	return (dest_len + src_len);
}
