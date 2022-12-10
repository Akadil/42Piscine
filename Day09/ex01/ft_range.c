/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:21:24 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/29 13:15:40 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*returner;
	int	i;

	if (min >= max)
		return (0);
	returner = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		returner[i] = min + i;
		i++;
	}
	return (returner);
}
