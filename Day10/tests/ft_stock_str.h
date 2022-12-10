/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:09:03 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/30 18:59:49 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

int	ft_str_len(char *src);
char	*ft_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_show_tab(struct s_stock_str *par);

typedef struct	s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif
