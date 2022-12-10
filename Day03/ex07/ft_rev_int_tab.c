/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:08:09 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/15 16:21:42 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	container;

	i = 0;
	while (i < size / 2)
	{
		container = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = container;
		i++;
	}
}
