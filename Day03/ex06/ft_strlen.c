/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:57:17 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/15 14:07:11 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	to_return;

	to_return = 0;
	while (*str != '\0')
	{
		to_return++;
		str++;
	}	
	return (to_return);
}