/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:08:44 by akalimol          #+#    #+#             */
/*   Updated: 2022/09/01 21:20:32 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putdigit(int n);
void	ft_putnbr(int nb);
char	ft_check_operator(char *str);
void	ft_main2(int num1, int num2, char *str);
int		ft_skip_isspace(char *str);
int		ft_atoi(char *str);

#endif
