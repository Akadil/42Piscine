/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:26:02 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/29 13:04:22 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_ultimate_range.c"
#include <stdlib.h>
#include <stdio.h>


int	main(int argc, char *argv[])
{
	int	**matrix = (int**)malloc(sizeof(int*) * 2);
	int	i;
	int	num1;
	int	num2;

	if (argc > 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d", ft_ultimate_range(matrix, num1, num2));
		matrix[1] = '\0';

		i = 0;
		while (matrix[0] && matrix[0][i])
		{
			printf("%d ", matrix[0][i]);
			i++;
		}
	}
	return (0);
}
