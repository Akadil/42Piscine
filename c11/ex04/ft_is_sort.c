/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:34:20 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 19:18:42 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	prev;

	if (length == 0)
		return (1);
	i = 0;
	prev = tab[0];
	while (i < length)
	{
		if (f(prev, tab[0]) > 0)
			return (0);
		i++;
	}
	return (1);
}
