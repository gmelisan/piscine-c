/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_field.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 16:05:29 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/02 20:53:51 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	recalc_col(int ***field, int row, int col);
void	recalc_row(int ***field, int row, int col);
void	recalc_region(int ***field, int row, int col);
int		update_cell(int ***field, int i, int j);

int		update_field(int ***field)
{
	int e;
	int i;
	int j;

	i = 0;
	e = 0;
	while (i < 9 && !e)
	{
		j = 0;
		while (j < 9 && !e)
		{
			if (!*field[i][j])
			{
				e = update_cell(field, i, j);
			}
			j++;
		}
		i++;
	}
	return (e);
}

/*
** printf("Updating element [%d][%d]... ", i, j);
** printf("Done, possible values:  %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
** 	   field[i][j][1], field[i][j][2],
** 	   field[i][j][3], field[i][j][4], field[i][j][5],
** 	   field[i][j][6], field[i][j][7], field[i][j][8], field[i][j][9]);
*/

/*
** returns 5 in case of empty cell
*/

int		update_cell(int ***field, int i, int j)
{
	int e;
	int k;

	recalc_col(field, i, j);
	recalc_row(field, i, j);
	recalc_region(field, i, j);
	e = 5;
	k = 1;
	while (k < 10)
	{
		if (field[i][j][k] > 0)
			return (0);
		k++;
	}
	return (e);
}
