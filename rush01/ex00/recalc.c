/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recalc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddorren- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:42:02 by ddorren-          #+#    #+#             */
/*   Updated: 2018/09/02 22:42:04 by ddorren-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_start_coord(int row);

void	recalc_col(int ***field, int row, int col)
{
	int i;
	int del;

	i = 0;
	while (i < 9)
	{
		if (i != row)
		{
			del = *field[i][col];
			if (del > 0)
			{
				field[row][col][del] = 0;
			}
		}
		i++;
	}
}

void	recalc_row(int ***field, int row, int col)
{
	int j;
	int del;

	j = 0;
	while (j < 9)
	{
		if (j != col)
		{
			del = *field[row][j];
			if (del > 0)
			{
				field[row][col][del] = 0;
			}
		}
		j++;
	}
}

void	recalc_region(int ***field, int row, int col)
{
	int i;
	int j;
	int max_i;
	int max_j;
	int del;

	i = get_start_coord(row);
	j = get_start_coord(col);
	max_i = i + 2;
	max_j = j + 2;
	while (i <= max_i)
	{
		j = get_start_coord(col);
		while (j <= max_j)
		{
			if (i != row && j != col)
			{
				del = *field[i][j];
				if (del > 0)
					field[row][col][del] = 0;
			}
			j++;
		}
		i++;
	}
}

int		get_start_coord(int i)
{
	int coord;

	coord = 0;
	if (i >= 3 && i <= 5)
	{
		coord = 3;
	}
	else if (i >= 6 && i <= 8)
	{
		coord = 6;
	}
	return (coord);
}
