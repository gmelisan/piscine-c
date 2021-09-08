/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddorren- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 22:47:14 by ddorren-          #+#    #+#             */
/*   Updated: 2018/09/02 22:47:16 by ddorren-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		***create_field(void)
{
	int ***field;
	int i;
	int j;

	field = (int***)malloc(sizeof(*field) * 9);
	i = 0;
	while (i < 9)
	{
		field[i] = (int**)malloc(sizeof(*field[i]) * 9);
		j = 0;
		while (j < 9)
		{
			field[i][j] = (int*)malloc(sizeof(field[i][j]) * 10);
			j++;
		}
		i++;
	}
	return (field);
}

void	fill_field(int ***field, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				*field[i][j] = 0;
			else
				*field[i][j] = argv[i + 1][j] - '0';
			k = 1;
			while (k < 10)
			{
				field[i][j][k] = k;
				k++;
			}
			j++;
		}
		i++;
	}
}

void	destroy_field(int ***field)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			free(field[i][j]);
			j++;
		}
		free(field[i]);
		i++;
	}
	free(field);
}
