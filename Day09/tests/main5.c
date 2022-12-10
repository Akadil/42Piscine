/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:50:25 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/31 13:00:16 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex05/ft_split.c"

int	main(int argc, char *argv[])
{
	char	**split;
	int	i;

	if (argc > 0)
	{
		split = ft_split(argv[1], argv[2]);
		i = 0;
		while (split && split[i])
		{
			printf("%s\n", split[i]);
			i++;
		}
	}
	return (0);
}
