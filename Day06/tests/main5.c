/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:10:23 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 12:14:21 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex05/ft_atoi_base.c"

int	main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Come one, man, give me right input!");
	else
		printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
