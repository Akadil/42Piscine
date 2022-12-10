/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:27:17 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/16 19:02:44 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_str_is_alpha.c"
#include <unistd.h>
#include <stdio.h>

int	main()
{
	
	printf("my word %s is %d\n", "akadil", ft_str_is_alpha("akadil"));
	printf("my word %s is %d\n", "akad%il", ft_str_is_alpha("akad%il"));
	printf("my word %s is %d\n", "akadi22l", ft_str_is_alpha("akadi22l"));
	printf("my word %s is %d\n", " ", ft_str_is_alpha(" "));
	printf("my word %s is %d\n", "", ft_str_is_alpha(""));
	return (0);
}
