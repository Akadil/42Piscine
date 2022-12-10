/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:01:31 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/17 21:11:13 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex00/ft_strcmp.c"
#include <stdio.h>

int	main()
{
	char name1[] = "akadil";
	char name2[] = "akadie";
	char name3[] = "akadi";
	char name4[] = "akadill";
	char name5[] = "akodil";
	char name6[] = "";

	printf("cmp: %s and %s. Result is %d\n", name1, name2, ft_strcmp(name1, name2));
	printf("cmp: %s and %s. Result is %d\n", name1, name3, ft_strcmp(name1, name3));
	printf("cmp: %s and %s. Result is %d\n", name1, name4, ft_strcmp(name1, name4));
	printf("cmp: %s and %s. Result is %d\n", name1, name5, ft_strcmp(name1, name5));
	printf("cmp: %s and %s. Result is %d", name1, name1, ft_strcmp(name1, name1));
	printf("cmp: %s and %s. Result is %d", name1, name6, ft_strcmp(name1, name7));
}
