/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:17:26 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/18 17:23:00 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ft_strncpy.c"
#include "ft_putstr_pointer.c"

int	main(void)
{
	char str1[] = "akadil\0";
	char str2[] = "kalimoldayev";
	ft_putstr_pointer(ft_strncpy(str1, str2, 6));
	return (0);
}
