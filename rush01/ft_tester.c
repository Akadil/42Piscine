/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tester.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:33:39 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/21 23:34:54 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isok2(int row, int col, int num, int **upd_argv, int n)
{
	if (row < 2 && col < 2)
        {
                if (upd_argv[0][col + 1] == 2 || upd_argv[row + 1][0] == 2)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else if (row > 1 && col < 2)
        {
                if (upd_argv[row + 1][0] == 2 || upd_argv[n + 1][col + 1] == 2)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else if (row < 2, col > 1)
        {
                if (upd_argv[0][col + 1] == 2 || upd_argv[row + 1][n + 1] == 2)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else
        {
                if (upd_argv[row + 1][n + 1] == 2 || upd_argv[n + 1][col + 1] == 2)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
	return (1);
}

int	isok3(int row, int col, int num, int **upd_argv, int n)
{
	if (row < 2 && col < 2)
        {
                if (upd_argv[0][col + 1] == 3 || upd_argv[row + 1][0] == 3)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else if (row > 1 && col < 2)
        {
                if (upd_argv[row + 1][0] == 3 || upd_argv[n + 1][col + 1] == 3)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else if (row < 2, col > 1)
        {
                if (upd_argv[0][col + 1] == 3 || upd_argv[row + 1][n + 1] == 3)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
        else
        {
                if (upd_argv[row + 1][n + 1] == 3 || upd_argv[n + 1][col + 1] == 3)
                        return ((num == 1 || num == 2) ? (1) : (0));
        }
	return (1);
}


int	isOk(int **matrix, int row, int col, int num, int **upd_argv, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (matrix[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < n)
	{
		if (matrix[i][col] == num)
			return (0);
		i++;
	}
	if (row == 0 || col == 0 || row == (n - 1) || col == (n - 1))
		num = isok2(row, col, num, upd_argv, n);
	else
		num = isok3(row, col, num, upd_argv, n);
	return ((num == 0) ? (0) : (1));
}

