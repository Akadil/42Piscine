/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:46:58 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 16:20:44 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_src_len(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_src_len(src);
	if (src_len + 1 <= size)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (size > 0)
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size != 0)
		dest[i] = '\0';
	return (src_len);
}
