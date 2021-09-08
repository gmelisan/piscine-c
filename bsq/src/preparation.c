/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:13:34 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 21:44:01 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_valid(char c, t_map *map)
{
	return (c == map->obstacle || c == map->empty ? 1 : 0);
}

int		check_map(t_map *map)
{
	int i;
	int j;

	i = 0;
	while (i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			if (map->array[i][j] == '\0' || !is_valid(map->array[i][j], map))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	create_cache(t_map *map)
{
	int i;
	int j;

	map->cache = (int**)malloc(sizeof(int*) * (map->y));
	i = 0;
	while (i < map->y)
	{
		map->cache[i] = (int*)malloc(sizeof(int) * (map->x));
		j = 0;
		while (j < map->x)
		{
			if (map->array[i][j] == map->obstacle)
				map->cache[i][j] = 0;
			else
				map->cache[i][j] = 1;
			j++;
		}
		i++;
	}
}

void	clear_map(t_map *map)
{
	int i;

	i = 0;
	while (i < map->y)
	{
		free(map->array[i]);
		i++;
	}
	free(map->array);
}

void	clear_cache(t_map *map)
{
	int i;

	i = 0;
	while (i < map->y)
	{
		free(map->cache[i]);
		i++;
	}
	free(map->cache);
}
