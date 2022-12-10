/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:05:16 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/26 12:29:36 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_convert_base.c"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	return (0);
}
