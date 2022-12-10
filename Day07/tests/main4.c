/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:44:07 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:44:49 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex04/ft_fibonacci.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_fibonacci(atoi(argv[1])));
	return (0);
}

