/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalimol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:17:00 by akalimol          #+#    #+#             */
/*   Updated: 2022/08/21 21:08:22 by akalimol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_base_step(char **upd_argv, char known_matrix[4][4])
{
	// Function to set the basic step. Like 1, 4, 2&3, and general picture
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if ()
	}
}

int	ft_is_completed(chr known_matrix[4][4])
{
	// check if it is fully completed
	// if completed, return 1
	// if no, then 0
}

char	**ft_rewrite_argv(char *argv[])
{
	// upper row and lower row will be first and second row respectively
	// left column and right column will be third and fourth row respectivey
	// (important!) upper number of the column is first character of the row
	//
	// return 4x4 matrix
}

char	*ft_possibilities(int row_pos, int col_pos, char **known_matrix, char **upd_argv)
{
	// this function returns possible number for given position
	// Benjis going to do it
}

int	ft_strlen(char *str)
{
	return // the length of the string
}

void	ft_print_mtrix(char **known_matrix)
{
	
}

int	main(int argc, char *argv[])
{
	// Benjis error check
	int known_matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	char upd_argv[4][4] = ft_rewrite_argv(argv);

	ft_base_step(upd_argv, known_matrix);
	while (ft_is_completed(known_matrix) != 1)
	{
		int row = 0;
		int column = 0;

		while(row < 4)
		{
			while (column < 4)
			{
				if (known_matrix[row][column] == 0)
					known_matrix[row][column] = ft_possibilities(row, column, known_matrix, upd_argv);
				column++;
			}
			row ++;
		}
		ft_make_romis_work(known_matrix)
	}
	return (0);
}

void	ft_make_romis_work(int known_matrix[4][4])
{
	// Possible numbers in matrix.
	// 8 -> my number is 4
	// 7 -> my number is 1, 2, 3
	// 6 -> my number is 2, 3
	// 5 -> my number is 1, 3
	// 4 -> my number is 3
	// 3 -> my number is 1, 2
	// 2 -> my number is 2
	// 1 -> my number is 1
	
	// Take the first row 
	int i = 0;
	int j = 0;

	while (i < row)
	{
		char matrix[row][row];
		while (j < column)
		{
			if ft_sizeof(converter(known_matrix[i][j])) != 1:
				continue ;
			
			while (converter(known_matrix[i][j])[k] != '\0')
			{
				
			}
		}
		ft_function()
	}
	
	while (i < row)
		// with nb 2
}

int	ft_check_for_concreteness(int a)
{
	int	a;

	a = 9;
	while (a > 0)
	{
		if 
	}
}

// Try this combination. if only one solution, then give it to me. If no then leave it
int	make_all_possible_solutions(int a, int b, int c, int d)
{
	return 0; if more than one combination
	return 1: if exactly one combination

	int pos_1[4];
	int pos_2[4];
	int pos_3[4];
	int pos_4[4];
}

int converter(int a)
{
	int	i;
	int	new_a;
	int	container[9];
	int	j;

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
	int	j;
	int	returner;

	j = 0;
	returner = 1;
	while(j < b)
	{
		returner *= a;
	}
	return (returner);
}


