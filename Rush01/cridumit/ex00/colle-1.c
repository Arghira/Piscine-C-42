/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iobrica <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 18:25:11 by iobrica           #+#    #+#             */
/*   Updated: 2018/09/30 18:25:22 by iobrica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		validate(int **numbers, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((numbers[i][col] == value) || (numbers[row][i] == value))
			return (0);
		i += 1;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

int		solve_sudoku(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (numbers[x][y] != 0)
		return (solve_sudoku(numbers, value + 1));
	while (i < 10)
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (solve_sudoku(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = 0;
		}
		i += 1;
	}
	return (0);
}
