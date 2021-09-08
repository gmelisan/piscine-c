/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:57:31 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 22:24:33 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	solve(t_map *map)
{
	int i;
	int j;

	map->sol_len = 0;
	i = 0;
	while (i < map->y)
	{
		j = 0;
		while (j < map->x)
		{
			if (map->cache[i][j] > 0 && i != 0 && j != 0)
				map->cache[i][j] += minimum(map->cache[i - 1][j],
											map->cache[i][j - 1],
											map->cache[i - 1][j - 1]);
			if (map->cache[i][j] > map->sol_len)
			{
				map->sol_len = map->cache[i][j];
				map->sol_x = j;
				map->sol_y = i;
			}
			j++;
		}
		i++;
	}
}

int		minimum(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	return (c);
}

void	fill_square(t_map *map)
{
	int i;
	int j;

	i = map->sol_y - map->sol_len + 1;
	while (i <= map->sol_y)
	{
		j = map->sol_x - map->sol_len + 1;
		while (j <= map->sol_x)
		{
			map->array[i][j] = map->full;
			j++;
		}
		i++;
	}
}

/*
** int	square(t_map *map, int i, int j, int k)
**  {
** 	int x;
** 	int y;
**
** 	x = j;
** 	y = i;
** 	while (i < y + k && i < map->y)
** 	{
** 		//printf("i = %d\n", i);
** 		j = x;
** 		while (j < x + k && j < map->x)
** 		{
** 			//printf("j = %d\n", j);
** if (map->array[i][j] == map->obstacle) // если встречаем 1 то возвращаем
** 				return (k - 1); // площадь прошлого квадрата
** 			//argv[i][j] = '2';
** 			j++;
** 		}
** 		i++;
**
** 	}
** 	if (y + k > map->y || x + k > map->x) // если квадрат выходит за пределы
** 		return (k - 2); // возвращаем площадь прошлого
** 	// хоть это и выглядит как позапрошлого, на самом деле прошлого (сложна)
** 	if (i == map->y && j == map->x) // если дошли от начала до конца
** 		return (k);
** 	return (square(map, y, x, k + 1));
** 	// return (0);
** }
**
** int	solve(t_map *map)
** {
** 	int i;
** 	int j;
** 	int max;
**
** 	max = -1;
** 	i = 0;
** 	while (i < map->y)
** 	{
** 		j = 0;
** 		while(j < map->x)
** 		{
** 			if (max < square(map, i, j, 1))
** 			{
** 				max = square(map, i, j, 1);
** 				map->sol_y = i;
** 				map->sol_x = j;
** 				map->sol_len = max;
** 				//printf("y = %d\n x = %d\n", i, j);
** 				//printf("%d\n", max);
** 			}
** 			j++;
** 		}
** 		i++;
** 	}
** 	fill_square(map);
** 	return (max);
** }
*/
