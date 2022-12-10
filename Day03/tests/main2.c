/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:41:38 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/15 11:50:36 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_swap.c"
#include "ft_putnbr.c"

int main(void)
{
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	a = 2;
	b = 1;
	ptr1 = &a;
	ptr2 = &b;
	ft_putnbr(a);
	ft_putnbr(b);

	ft_swap(ptr1, ptr2);

	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
