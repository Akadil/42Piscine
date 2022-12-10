/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:57:16 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/31 21:58:08 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_find_lengths(char *str, char *charset, int *num_words)
{
	int	num2;
	int	i;

	i = 0;
	num2 = 0;
	while (str[i])
	{
		if (ft_in(str[i], charset) == 0)
		{
			if (!str[i + 1] || ft_in(str[i + 1], charset) == 1)
				num2++;
		}
		i++;
	}
	*num_words = num2;
}

char	*ft_add_word(char *str, char *charset, int pos, int *skipper)
{
	char	*returner;
	int		len;
	int		i;

	len = 0;
	while (str[pos + len] && ft_in(str[pos + len], charset) != 1)
		len++;
	returner = (char *)malloc(sizeof(char) * (len + 1));
	if (returner == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		returner[i] = str[pos + i];
		i++;
	}
	returner[len] = '\0';
	*skipper = len;
	return (returner);
}

char	**ft_split(char *str, char *charset)
{
	char	**returner;
	int		num_words;
	int		i;
	int		row;
	int		skip;

	ft_find_lengths(str, charset, &num_words);
	returner = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (returner == NULL)
		return (NULL);
	row = 0;
	i = 0;
	while (str[i])
	{
		if (ft_in(str[i], charset) != 1)
		{
			returner[row++] = ft_add_word(str, charset, i, &skip);
			i += skip;
		}
		i++;
	}
	return (returner);
}
