/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:26:24 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/29 13:18:25 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*container;

	if (*range)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	container = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		container[i] = min + i;
		i++;
	}
	*range = container;
	return (max - min);
}
