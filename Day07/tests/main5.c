/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:49:14 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 12:50:02 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../ex05/ft_sqrt.c"

int	main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}

