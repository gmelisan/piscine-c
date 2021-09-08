/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:30:15 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 22:56:13 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		read_map(int fd, t_map *map)
{
	int		i;
	char	*str;
	int		ret;
	char c;

	if (get_lines_number(fd, map))
		return (1);
	str = (char*)malloc(sizeof(char) * 1);
	map->x = count_width(&str, fd);
	map->array = (char**)malloc(sizeof(char*) * map->y);
	map->array[0] = str;
	i = 1;
	while (i < map->y)
	{
		map->array[i] = (char*)malloc(sizeof(char) * (map->x + 1));
		ret = read(fd, map->array[i], map->x + 1);
		if (ret <= 0 || ret != map->x + 1 || map->array[i][map->x] != '\n')
			return (1);
		i++;
	}
	if ((ret = read(fd, &c, 1)) != 0)
		return (1);
	return (0);
}

int		get_lines_number(int fd, t_map *map)
{
	char	c;
	int		i;
	char	*str;

	c = 0;
	str = (char*)malloc(sizeof(*str) * 100);
	i = 0;
	read(fd, &c, 1);
	if (!is_numeric(c))
		return (1);
	str[i] = c;
	i++;
	while (read(fd, &c, 1))
	{
		if (is_numeric(c))
			str[i] = c;
		else
			break ;
		i++;
	}
	str[i] = '\0';
	if ((map->y = ft_atoi(str)) == 0)
		return (1);
	free(str);
	return (get_chars(fd, map, c));
}

int		count_width(char **str_0, int fd)
{
	char	*str;
	char	*dupl;
	int		i;
	char	c;

	str = *str_0;
	i = 0;
	c = 1;
	while (c != '\n')
	{
		read(fd, &c, 1);
		if (c == '\0')
			return (0);
		dupl = duplicate(str, i);
		free(str);
		str = duplicate(dupl, i);
		free(dupl);
		str[i] = c;
		str[i + 1] = '\0';
		i++;
	}
	str[i] = '\0';
	*str_0 = str;
	return (i - 1);
}

char	*duplicate(char *argv, int w)
{
	char	*argv_rev;
	int		i;

	i = 0;
	argv_rev = (char*)malloc(sizeof(char) * (w + 2));
	while (i <= w)
	{
		argv_rev[i] = argv[i];
		i++;
	}
	argv_rev[i] = '\0';
	return (argv_rev);
}

int		get_chars(int fd, t_map *map, char c)
{
	if (c == '\0')
		return (1);
	map->empty = c;
	read(fd, &c, 1);
	if (c == '\0')
		return (1);
	map->obstacle = c;
	read(fd, &c, 1);
	if (c == '\0')
		return (1);
	map->full = c;
	read(fd, &c, 1);
	if (c != '\n')
		return (1);
	return (0);
}
