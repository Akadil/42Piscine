/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:25:51 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/18 16:33:48 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_str_is_lowercase.c"
#include <stdio.h>

int	main()
{
	char name[] = "asda\ndw\0";

	printf("num is %d", ft_str_is_lowercase(name));
	return (0);
}
