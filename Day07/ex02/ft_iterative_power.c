/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:28:44 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:31:38 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	returner;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	returner = 1;
	i = 0;
	while (i < power)
	{
		returner *= nb;
		i++;
	}
	return (returner);
}
