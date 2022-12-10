/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:03:42 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 20:23:28 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	find_len;

	if (!str || !to_find || !str[0])
		return (0);
	if (!to_find[0])
		return (str);
	find_len = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < find_len && str[i + j] && str[i + j] == to_find[j])
			j++;
		if (j == find_len)
			return (str + i);
		i++;
	}
	return (0);
}
