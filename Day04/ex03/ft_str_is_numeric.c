/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:49:18 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 13:09:35 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < '0' || '9' < *str)
			return (0);
		str ++;
	}
	return (1);
}
