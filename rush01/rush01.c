/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brutal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:26:09 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/21 23:32:16 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

// up    upd_argv[0][col + 1]
        // right upd_argv[row + 1][n + 1]
        // down  upd_argv[n + 1][col + 1]
        // left  upd_argv[row + 1][0]

void print(int **matrix, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}

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

int	solve_scyscraper(int **matrix, int row, int col, int **upd_argv, int n)
{
	int	i;

	if (row == n - 1 && col == n)
		return (1);
	if (col == n)
	{
		row ++;
		col = 0;
	}
	if (matrix[row][col] > 0)
		return solve_scyscraper(matrix, row, col, upd_argv, n);
	i = 0;
	while (i < n)
	{
		if (isOk(matrix, row, col, i, upd_argv, n) == 1)
		{
			matrix[row][col] = i;
			if (solve_scyscraper(matrix, row, col + 1, upd_argv, n) == 1)
			{
				print(matrix, 4);
				printf("\n");
				return (1);
			}
		}
		matrix[row][col] = 0;
		i++;
	}
	return (0);
}

int	**createMatrix(int n, int nb)
{
	int**	upd_argv = (int**)malloc((n) * sizeof(int*));
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		upd_argv[i] = (int*)malloc((n) * sizeof(int));
		i++;
	}
	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			upd_argv[i][j] = nb;
			j++;
		}
		j = 0;
		i++;
	}
	return (upd_argv);
}

int	**ft_rewrite_argv(char *argv[], int n)
{
	int	**upd_argv = createMatrix(n + 2, 0);
	int	k;
	int	m;


	k = 0;
	m = 0;
	while (argv[1][k] != '\0' && k < 8 * n)
	{
		if (k < 2 * n)
			upd_argv[0][1 + m] = argv[1][k] - '0';
		else if (k < 4 * n)
			upd_argv[n + 1][1 + m - n] = argv[1][k] - '0';
		else if (k < 6 * n)
			upd_argv[1 + m - (2 * n)][0] = argv[1][k] - '0';
		else
			upd_argv[1 + m - (3 * n)][n + 1] = argv[1][k] - '0';
		k += 2;
		m++;
	}
	return (upd_argv);
}

void	ft_base_step1(int **matrix, int **upd_argv)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (upd_argv[0][i] == 1)
			matrix[0][i - 1] = 4;
		if (upd_argv[0][i] == 4)
		{
			matrix[0][i - 1] = 1;
			matrix[1][i - 1] = 2;
			matrix[2][i - 1] = 3;
			matrix[3][i - 1] = 4;
		}
		i++;
	}
}

void ft_base_step2(int **matrix, int **upd_argv)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (upd_argv[i][5] == 1)
			matrix[i - 1][3] = 4;
		if (upd_argv[i][5] == 4)
		{
			matrix[i - 1][3] = 1;
			matrix[i - 1][2] = 2;
			matrix[i - 1][1] = 3;
			matrix[i - 1][0] = 4;
		}
		i++;
	}
}

void	ft_base_step3(int **matrix, int **upd_argv)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (upd_argv[5][i] == 1)
			matrix[3][i - 1] = 4;
		if (upd_argv[5][i] == 4)
		{
			matrix[3][i - 1] = 1;
			matrix[2][i - 1] = 2;
			matrix[1][i - 1] = 3;
			matrix[0][i - 1] = 4;
		}
		i++;
	}
}

void	ft_base_step4(int **matrix, int **upd_argv)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (upd_argv[i][0] == 1)
			matrix[i - 1][0] = 4;
		if (upd_argv[i][0] == 4)
		{
			matrix[i - 1][0] = 1;
			matrix[i - 1][1] = 2;
			matrix[i - 1][2] = 3;
			matrix[i - 1][3] = 4;
		}
		i++;
	}
}

void	ft_base_step(int **matrix, int **upd_argv)
{
	int	i;
	
	i = 0;
	ft_base_step1(matrix, upd_argv);
	ft_base_step2(matrix, upd_argv);
	ft_base_step3(matrix, upd_argv);
	ft_base_step4(matrix, upd_argv);
	while (i < 6)
	{
		if (upd_argv[0][i] == 2 && upd_argv[5][i] == 3)
			matrix[1][i - 1] = 4;
		if (upd_argv[0][i] == 3 && upd_argv[5][i] == 2)
			matrix[2][i - 1] = 4;
		i++;
	}
	i = 0;
	while (i < 6)
        {
                if (upd_argv[i][0] == 2 && upd_argv[i][5] == 3)
                        matrix[i - 1][1] = 4;
                if (upd_argv[i][0] == 3 && upd_argv[i][5] == 2)
                        matrix[i - 1][2] = 4;
        	i++;
	}
}

int	main(int argc, char *argv[])
{
	int	**matrix = createMatrix(4, 0);
	int	**upd_argv = ft_rewrite_argv(argv, 4);

	ft_base_step(matrix, upd_argv);;

	if (solve_scyscraper(matrix, 0, 0, upd_argv, 4) == 1)
		print(matrix, 4);
	else
		printf("Common man! give me valid numbers");
	free(matrix);
	free(upd_argv);
}


/*

int     *creator(int **matrix, int row_col, int track, int n)
{
        int     *returner = (int*)malloc(n * sizeof(int));
        int     a;

        a = 0;
        if (track == 1)
        {
                while (a < n)
                {
                        returner[a] = matrix[row_col][a];
                        a++;
                }
        }
        else
        {
                while (a < n)
                {
                        returner[a] = matrix[a][row_col];
                        a++;
                }
        }
        return (returner);
}

int     check_row_views_left(int left, int new_abc[], int n)
{
        int     a;
        int     highest;
        int     count;

        count = 0;
        a = 1;
        highest = new_abc[0];
        while (a < n)
        {
                if (new_abc[a] < new_abc[a - 1] || new_abc[a] < highest)
                        new_abc[a] = -1;
                if (new_abc[a - 1] > highest)
                        highest = new_abc[a - 1];
                a++;
        }
        a = 0;
        while (new_abc[a] != '\0')
        {
                if (new_abc[a] != -1)
                        count ++;
                a++;
        }
        return (count < left) ? (1) : (0);
}

int     check_row_views_right(int right, int new_abc[], int n)
{
        int     a;
        int     highest;
        int     count;

        count = 0;
        a = n - 2;
        highest = new_abc[0];
        while (a > 0)
        {
                if (new_abc[a] < new_abc[a + 1] || new_abc[a] < highest)
                        new_abc[a] = -1;
                if (new_abc[a + 1] > highest)
                        highest = new_abc[a + 1];
                a--;
        }
        a = n - 1;
        while (new_abc[a] != '\0')
        {
                if (new_abc[a] != -1)
                        count ++;
                a--;
        }
        return (count <= right) ? (1) : (0);
}


  if (check_row_views_left(upd_argv[row + 1][0], creator(matrix, row, 1, n), n) == 0)
                return (0);
        if (check_row_views_left(upd_argv[0][col + 1], creator(matrix, col, 2, n), n) == 0)
                return (0);
        if (check_row_views_right(upd_argv[row + 1][n + 1], creator(matrix, row, 1, n), n) == 0)
                return (0);
        if (check_row_views_right(upd_argv[n + 1][col + 1], creator(matrix, col, 2, n), n) == 0)
                return (0);



 * */




// int     check_row_views_left(int left, int new_abc[], int n)
// int     *creator(int **matrix, int row_col, int track, int n)
