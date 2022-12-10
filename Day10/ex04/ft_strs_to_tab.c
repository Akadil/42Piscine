/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:00:09 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/30 22:17:28 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

int	ft_str_len(char *src)
{
	int	i;

	i = 0;
	while (src && src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*returner;
	int		i;

	returner = (char *)malloc(ft_str_len(src) + 1);
	if (returner == NULL)
		return (NULL);
	i = 0;
	while (src && src[i] != '\0')
	{
		returner[i] = src[i];
		i++;
	}
	returner[i] = '\0';
	return (returner);
}

void	ft_make_the_accuratest_code(struct s_stock_str *returner, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		free(returner[i].copy);
		i++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*returner;
	int					i;

	returner = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (returner == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		returner[i].size = ft_str_len(av[i]);
		returner[i].str = av[i];
		returner[i].copy = ft_strdup(av[i]);
		if (returner[i].copy == NULL)
		{
			ft_make_the_accuratest_code(returner, i);
			free(returner);
			return (NULL);
		}
		i++;
	}
	returner[i].str = 0;
	return (returner);
}
