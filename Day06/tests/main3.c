/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:05:16 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/22 18:08:50 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex03/ft_atoi.c"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Give me valid input, man!");
	}
	printf("For the input %s\nMy number is %d", argv[1], ft_atoi(argv[1]));
	return (0);
}
