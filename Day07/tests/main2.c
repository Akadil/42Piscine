/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:31:54 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:33:37 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex02/ft_iterative_power.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

