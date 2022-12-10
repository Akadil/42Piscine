/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:28:45 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/16 21:07:06 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex07/ft_strupcase.c"
#include <stdio.h>
#include "ft_putstr_pointer.c"
#include "../ex00/ft_strcpy.c"

int	main()
{
	char ptr[] = "akadil";

	printf("My word is %s -> ", "akadil");
	ft_putstr_pointer(ft_strupcase(ptr));

	ft_strcpy(ptr, "kalIMOLDAYEV");
	printf("\nMy word is %s -> ", "kalIMOLDAYEV");
	ft_putstr_pointer(ft_strupcase(ptr));
	//printf("\nMy word is %s -> ", "123akaDIL123");
	//ft_putstr_pointer(ft_strupcase("123akaDIL123"));
	//printf("\nMy word is %s -> ", "aka aka \t\n");
	//ft_putstr_pointer(ft_strupcase("aka aka \t\n"));
	return (0);
}
