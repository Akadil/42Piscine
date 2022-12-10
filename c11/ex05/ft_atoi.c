/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:21:49 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 21:11:19 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		{
			i++;
			continue ;
		}
		if (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		{
			i++;
			continue ;
		}
		break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	returner;
	int	sign;
	int	i;
	int	checker;

	checker = 0;
	returner = 0;
	sign = 1;
	i = ft_skip_isspace(str);
	while (str[i] != '\0')
	{
		if (str[i] == '+' && checker == 0)
			sign *= 1;
		else if (str[i] == '-' && checker == 0)
			sign *= -1;
		else if (str[i] < '0' || '9' < str[i])
			break ;
		else
		{	
			checker = 1;
			returner = returner * 10 + str[i] - 48;
		}
		i++;
	}
	return (returner * sign);
}
