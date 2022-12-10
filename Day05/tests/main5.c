/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:55:51 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 13:26:16 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex05/ft_strlcat.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		char	*name = malloc(atoi(argv[1]) + 1);
		int	ak = atoi(argv[4]);

		name = strcat(name, argv[2]);
		printf("%d ", ft_strlcat(name, argv[3], ak));
		printf("%s", argv[2]);
		return (0);
	}
}
