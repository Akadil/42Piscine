/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:34:28 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/17 19:40:52 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex02/ft_strcat.c"
#include "../ex03/ft_strncat.c"
#include "../../Day04/tests/ft_putstr_pointer.c"

int	main()
{
	char name1[] = "akadil\0\0\0\0\0";
	char name2[] = "Noah";
	char name3[] = "NoahNoah";
	char name4[] = "akadil\0\0\0\0asd";

	printf("strcat check\n-----------\n");
	//printf("\n  %s to %s. Result: ", name2, name1);
	//ft_putstr_pointer(ft_strcat(name1, name2));
	printf("\n  %s to %s. Result: ", name1, name3);
	ft_putstr_pointer(ft_strcat(name3, name1));
	//printf("\n  %s to %s. Result: ", name2, name4);
	//ft_putstr_pointer(ft_strcat(name4, name2));

	printf("\n\nstrncat check\n-----------\n");
	//printf("\n  %s to %s with 4. Result: ", name2, name1);
	//ft_putstr_pointer(ft_strncat(name1, name2, 4));
	//printf("\n  %s to %s with 3. Result: ", name2, name1);
	//ft_putstr_pointer(ft_strncat(name1, name2, 3));
	//printf("\n  %s to %s with 5. Result: ", name2, name1);
	//ft_putstr_pointer(ft_strncat(name1, name2, 5));
	return (0);
}
