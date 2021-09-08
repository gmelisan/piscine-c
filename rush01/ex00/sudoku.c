/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 18:26:57 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/02 21:42:57 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solve(int ***field);
int		update_field(int ***field);
void	single(int ***field);
void	hidden_single_rows(int ***field);
void	hidden_single_cols(int ***field);
void	show_field(int ***field);

int		sudoku(int ***field)
{
	int e;

	e = solve(field);
	return (e);
}

int		solve(int ***field)
{
	int e;
	int i;

	e = 0;
	i = 0;
	while (i < 42)
	{
		e = update_field(field);
		single(field);
		e = update_field(field);
		hidden_single_rows(field);
		e = update_field(field);
		hidden_single_cols(field);
		e = update_field(field);
		i++;
	}
	return (e);
}

/*
** int ***save;
** int count;
*/

/*
** while (e) // while assumption fails
** {
** 	e = update_field(field); // sets all possible values
** 	save = save_field(field); // save initial state of field
** 	e = assumption_loop(field);
**  // assume values cell by cell, checking for fail every it.
** 	if (!e)
** 		break;
** 	field = restore_field(save); // restore initial state of field
** }
*/

int		assumption_loop(int ***field)
{
	int e;
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < 9 && !e)
	{
		j = 0;
		while (j < 9 && !e)
		{
			if (field[i][j][k] == k)
			{
				*field[i][j] = k;
				e = update_field(field);
			}
			j++;
		}
		i++;
	}
	return (e);
}
