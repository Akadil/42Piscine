/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:44:19 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/21 23:32:38 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     **createMatrix(int n, int nb)
{
        int**   upd_argv = (int**)malloc((n) * sizeof(int*));
        int     i;
        int     j;

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

int     **ft_rewrite_argv(char *argv[], int n)
{
        int     **upd_argv = createMatrix(n + 2, 0);
        int     k;
        int     m;


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

int power_of(int a, int b)
{
        int     j;
        int     returner;

        j = 0;
        returner = 1;
        while(j < b)
        {
                returner *= a;
        }
        return (returner);
}

int	normal_number(int nb)
{
	int	i;

	i = 8;
	while (i > -1)
	{
		if (nb - power_of(2, i) == 0)
			return (1);
		i--;
	}
	return (0);
}

int	basic_operation(int **matrix, int **upd_argv, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < n)
	{
		while(j < n)
		{
			if (normal_number(matrix[i][j]) == 1)
				continue;
			matrix[i][j] = ft_possibilities(matrix, )
			j++;
		}
		i++;
	}
}

int**   recursion(int **matrix, int **upd_argv int n)
{
        char    new_matrix[n][n] = basic_operation(matrix[n][n], upd_argv);
        char    unknown_pos;
        int     *my_numbers;
        int     k;
        int     final_marix[n][n];

        if (is_empty_matrix(matrix) == 1)
                return (empty_matrix());
        unknown_pos = ft_identify_position(matrix);
        my_numbers = converter(matrix[unknown_pos[0]][unknown_pos[1]]);

        k = 0;
        while (my_numbers[k] != '\0')
        {
                matrix[unknown_pos[0]][unknown_pos[1]] = my_numbers[k];
                final_matrix = recursion(matrix);

                if (is_completed(final_matrix) == 1)
                        break ;
                k++;
        }
        return (final_matrix);
}


int	main()
{
	int	**known_matrix = createMatrix(4, 0);
	char	**upd_argv = ft_rewrite_argv(argv);

	int	**final_matrix;
	
	recursion(known_matrix, upd_argv, 4);
}




























int	is_empty_matrix(int **matrix[n][n])
{
	// check for emptyness
	
	return (0);
}

int**	basic_operation(int matrix[n][n])
{
	int row = 0;
        int column = 0;

        while(row < 4)
        {
        	while (column < 4)
                {
                	if (matrix[row][column] == 0)
                        	matrix[row][column] = ft_possibilities(row, column, matrix, upd_argv);
                        column++;
                }
                row ++;
        }
	return (matrix[n][n]);
}

int	*ft_identify_position(int matrix[n][n])
{
	int	i;
	int	j;
	int	returner[2];

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			if (ft_concrete_number(matrix[i][j]) == 1)
				continue ;
			returner[0] = i;
			returner[1] = j;
		}
	}
	return (returner);
}

int	ft_concrete_number(int a);

int**	recursion(int **matrix, int n)
{
	char	new_matrix[n][n] = basic_operation(matrix[n][n]);
	char	unknown_pos;
	int	*my_numbers;
	int	k;
	int	final_marix[n][n];

	if (is_empty_matrix(matrix) == 1)
		return (empty_matrix());
	unknown_pos = ft_identify_position(matrix);
	my_numbers = converter(matrix[unknown_pos[0]][unknown_pos[1]]);
	
	k = 0;
	while (my_numbers[k] != '\0')
	{
		matrix[unknown_pos[0]][unknown_pos[1]] = my_numbers[k];
		final_matrix = recursion(matrix);
		
		if (is_completed(final_matrix) == 1)
			break ;
		k++;
	}
	return (final_matrix);
}

int	is_completed(int matrix[n][n]);

int converter(int a)
{
        int     i;
        int     new_a;
        int     container[9];
        int     j;

        j = 0;
        new_a = a;
        i = 9;
        while (i > 0)
        {
                if (new_a - power_of(2, i) > 0)
                {
                        new_a -= power_of(2, i);
                        container[j] = i;
                }
        }
        return (container);
}

int power_of(int a, int b)
{
        int     j;
        int     returner;

        j = 0;
        returner = 1;
        while(j < b)
        {
                returner *= a;
        }
        return (returner);
}




























