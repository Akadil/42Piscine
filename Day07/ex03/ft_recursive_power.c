/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:35:28 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:37:17 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	returner;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	returner = nb * ft_recursive_power(nb, power - 1);
	return (returner);
}
