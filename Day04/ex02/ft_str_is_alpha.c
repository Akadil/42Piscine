/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:19:33 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 13:09:03 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!str || *str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || ('Z' < *str && *str < 'a') || 'z' < *str)
			return (0);
		str ++;
	}
	return (1);
}
