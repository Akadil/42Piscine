/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:00:43 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/24 12:39:46 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_alphanumeric(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && 'a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			if (ft_is_alphanumeric(str[i - 1]) == 0)
				str[i] = str[i] - 32;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
			if (ft_is_alphanumeric(str[i - 1]) == 1)
				str[i] += 32;
		i++;
	}
	return (str);
}
