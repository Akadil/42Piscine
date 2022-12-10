/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:15:38 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:23:22 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_iterative_factorial.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
