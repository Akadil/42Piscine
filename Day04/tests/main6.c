/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:14:11 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/16 20:45:39 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex06/ft_str_is_printable.c"
#include <stdio.h>

int	main()
{
	printf("My string is %s is %d\n", "abschbalv", ft_str_is_printable("abschbalv"));
	printf("My string is %s is %d\n", "", ft_str_is_printable(""));
	return (0);
}
