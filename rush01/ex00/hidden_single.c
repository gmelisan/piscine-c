/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidden_single.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddorren- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:02:55 by ddorren-          #+#    #+#             */
/*   Updated: 2018/09/02 22:02:57 by ddorren-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	hidden_single_rows(int ***field);
void	hidden_single_cols(int ***field);
void	hidden_single_row(int ***field, int row);
void	hidden_single_col(int ***field, int col);

void	hidden_single_rows(int ***field)
{
	int i;

	i = 0;
	while (i < 9)
	{
		hidden_single_row(field, i);
		i++;
	}
}

void	hidden_single_cols(int ***field)
{
	int i;

	i = 0;
	while (i < 9)
	{
		hidden_single_col(field, i);
		i++;
	}
}

void	hidden_single_row(int ***field, int row)
{
	int num;
	int k;
	int match_count;
	int position;

	num = 1;
	while (num <= 9)
	{
		k = 0;
		match_count = 0;
		position = 0;
		while (k < 9)
		{
			if (!*field[row][k] && field[row][k][num] != 0)
			{
				match_count++;
				position = k;
			}
			k++;
		}
		if (match_count == 1)
			*field[row][position] = num;
		num++;
	}
}

void	hidden_single_col(int ***field, int col)
{
	int num;
	int k;
	int match_count;
	int position;

	num = 1;
	while (num <= 9)
	{
		k = 0;
		match_count = 0;
		position = 0;
		while (k < 9)
		{
			if (!*field[k][col] && field[k][col][num] != 0)
			{
				match_count++;
				position = k;
			}
			k++;
		}
		if (match_count == 1)
			*field[position][col] = num;
		num++;
	}
}
