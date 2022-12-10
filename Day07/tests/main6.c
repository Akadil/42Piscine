/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:05:29 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 13:06:00 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex06/ft_is_prime.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_is_prime(atoi(argv[1])));
	return (0);
}

