/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:50:57 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/16 18:56:21 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex03/ft_str_is_numeric.c"
#include <stdio.h>

int	main()
{
	printf("for str %s, answer is %d\n", " ", ft_str_is_numeric(" "));
	printf("for str %s, answer is %d\n", "123asd", ft_str_is_numeric("123asd"));
	printf("for str %s, answer is %d\n", "123y4616", ft_str_is_numeric("123y4616"));
	printf("for str %s, answer is %d\n", "", ft_str_is_numeric(""));

	return (0);
}
