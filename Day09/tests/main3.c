/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:42:30 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/31 15:08:23 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_strjoin.c"
#include <stdlib.h>

int	main()
{
	char	*sep = "-----";
	char	**table = (char**)malloc(4);
	int	i;

	i = 0;
	while (i < 4)
	{
		table[i] = (char*)malloc(7);
		i++;
	}
	table[0] = "lol";
	table[1] = "pouic";
	table[2] = "";
	table[3] = "youpiiii";

	printf("%s", ft_strjoin(0, table, sep));
	return (0);
}
