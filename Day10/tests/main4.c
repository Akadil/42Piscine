/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:12:20 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/30 19:07:21 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	main(int argc, char *argv[])
{
	char			**strs;
	struct s_stock_str	*my_adt;
	int			i;

	if (argc > 0)
	{
		strs = malloc(sizeof(char*) * (argc + 1));
		if (strs == NULL)
			return (0);
		i = 0;
		while (i < argc)
		{
			strs[i] = argv[i + 1];
			i++;
		}
		strs[i] = '\0';
		my_adt = ft_strs_to_tab(argc, strs);
		ft_show_tab(my_adt);
	}
	return (0);
}
