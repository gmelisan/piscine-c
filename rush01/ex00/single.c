/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddorren- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:24:23 by ddorren-          #+#    #+#             */
/*   Updated: 2018/09/02 21:36:54 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_vals(int *arr);
void	set_single(int *arr);

void	single(int ***field)
{
	int i;
	int j;
	int counter;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (*field[i][j] == 0)
			{
				counter = count_vals(field[i][j]);
				if (counter == 1)
					set_single(field[i][j]);
			}
			j++;
		}
		i++;
	}
}

int		count_vals(int *arr)
{
	int i;
	int counter;

	counter = 0;
	i = 1;
	while (i < 10)
	{
		if (arr[i] != 0)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

void	set_single(int *arr)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (arr[i] != 0)
		{
			*arr = arr[i];
		}
		i++;
	}
}

/*
** Think about arr[i] = 0;
*/
