/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:31:10 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 18:33:39 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	returner;
	int	i;

	i = 0;
	returner = 0;
	while (i < length)
	{
		if (f(str[i]) != 0)
			returner++;
		i++;
	}
	return (returner);
}
