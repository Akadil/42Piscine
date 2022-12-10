/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:16:50 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 18:19:40 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*returner;
	int	i;

	returner = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		returner[i] = f(tab[i]);
		i++;
	}
	return (returner);
}
