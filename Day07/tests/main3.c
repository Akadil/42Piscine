/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:37:27 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:39:55 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex03/ft_recursive_power.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

