/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:57:06 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/15 14:07:33 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex06/ft_strlen.c"
#include "ft_putnbr.c"

void	main()
{
	char str[6] = {'a', 'k', 'a', 'd', 'i', 'l'};
	char *ptr;
	int container;

	ptr = &str[0];
	ft_putnbr(ft_strlen(ptr));
}
