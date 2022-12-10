/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main9.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:04:45 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/23 13:21:07 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex09/ft_strcapitalize.c"
#include "ft_putstr_pointer.c"

int	main()
{
	char name[] = "";

	printf("%s\n", name);
	ft_putstr_pointer(ft_strcapitalize(name));

	// check the printf version
}
