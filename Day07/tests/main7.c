/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:25:21 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 13:29:03 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex07/ft_find_next_prime.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}

