/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:26:46 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/31 13:27:58 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strs_len(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	returner;

	returner = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			returner++;
		j = 0;
		while (i != size - 1 && sep[j++])
			returner++;
		i++;
	}
	return (returner);
}

void	ft_create_array(char **strs, int size, char *ret, char *sep)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ret[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			ret[k++] = sep[j++];
		i++;
	}
	ret[k] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		ret_len;

	ret_len = ft_strs_len(strs, sep, size);
	ret = (char *)malloc (ret_len + 1);
	if (ret == NULL)
		return (NULL);
	ft_create_array(strs, size, ret, sep);
	return (ret);
}
