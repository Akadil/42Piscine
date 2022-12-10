/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:12:01 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/16 12:45:54 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_strcpy.c"
#include "ft_putstr_pointer.c"

int	main()
{
	char name[100] = "akadil";
	char surname[100] = "kalimoldayev";
	
	ft_putstr_pointer(ft_strcpy(surname, name));
	return (0);
}
