/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:24:37 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 18:51:04 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	returner;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	returner = ft_recursive_factorial(nb - 1) * nb;
	return (returner);
}
