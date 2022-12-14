/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:08:11 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 13:10:14 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32 || 126 < *str)
			return (0);
		str ++;
	}
	return (1);
}
