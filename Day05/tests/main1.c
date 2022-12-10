/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:10:46 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/17 17:21:17 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/ft_strncmp.c"
#include <stdio.h>

int	main()
{
	char name1[] = "akadil";
	char name2[] = "akadie";
	char name3[] = "akadi";
	char name4[] = "akadill";
	char name5[] = "akodil";

	printf("cmp: %s and %s with 6. Result is %d\n", name1, name2, ft_strncmp(name1, name2, 6));
	printf("cmp: %s and %s with 6. Result is %d\n", name1, name3, ft_strncmp(name1, name3, 6));
	printf("cmp: %s and %s with 5. Result is %d\n", name1, name3, ft_strncmp(name1, name3, 5));
	printf("cmp: %s and %s with 6. Result is %d\n", name1, name4, ft_strncmp(name1, name4, 6));
	printf("cmp: %s and %s with 7. Result is %d\n", name1, name4, ft_strncmp(name1, name4, 7));
	printf("cmp: %s and %s with 6. Result is %d\n", name1, name5, ft_strncmp(name1, name5, 6));
	printf("cmp: %s and %s with 6. Result is %d\n", name1, name1, ft_strncmp(name1, name1, 6));
	printf("cmp: %s and %s with 4. Result is %d\n", name1, name1, ft_strncmp(name1, name1, 4));
	printf("cmp: %s and %s with 7. Result is %d\n", name1, name1, ft_strncmp(name1, name1, 7));
}

