/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:26:36 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:27:52 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex01/ft_recursive_factorial.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return (0);
}

