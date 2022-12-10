/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:14:26 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/24 11:09:10 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex10/ft_strlcpy.c"
#include <stdio.h>

int	main()
{
	char name[] = "LZHYV";
	char surname[] = "JlaoN"; 
	printf("%s and %s\n", name, surname);
	printf("%s. Result is %d", name, ft_strlcpy(surname, name, 5));
	return (0);
}
