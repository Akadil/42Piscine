/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:16:33 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/29 13:14:54 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *src)
{
	int	i;

	i = 0;
	while (src && src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*returner;
	int		i;

	returner = (char *)malloc(ft_str_len(src) + 1);
	i = 0;
	while (src && src[i] != '\0')
	{
		returner[i] = src[i];
		i++;
	}
	returner[i] = '\0';
	return (returner);
}
