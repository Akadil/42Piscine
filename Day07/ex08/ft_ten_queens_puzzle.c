/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:51:24 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/25 19:05:50 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *positions)
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = positions[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	isok(int *pos, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (pos[i] == col)
			return (0);
		if (pos[i] == col + i - row)
			return (0);
		if (pos[i] == col + row - i)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int *positions, int row)
{
	int	returner;
	int	i;

	if (row == 10)
	{
		print(positions);
		return (1);
	}
	returner = 0;
	i = 0;
	while (i < 10)
	{
		if (isok(positions, row, i) == 1)
		{
			positions[row] = i;
			returner += solve(positions, row + 1);
			positions[row] = -1;
		}
		i++;
	}
	return (returner);
}

int	ft_ten_queens_puzzle(void)
{
	int	returner;
	int	positions[10];

	returner = 0;
	while (returner < 10)
	{
		positions[returner] = -1;
		returner++;
	}
	returner = solve(positions, 0);
	return (returner);
}
