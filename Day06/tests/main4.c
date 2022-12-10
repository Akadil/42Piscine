/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:30:48 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/22 19:44:16 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex04/ft_putnbr_base.c"
#include "../ex03/ft_atoi.c"

int	main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Give me right input");
	else
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	return (0);
}
