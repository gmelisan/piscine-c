/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:45:31 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 21:36:51 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		if (handle_argv(NULL))
			error_message();
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (handle_argv(argv[i]))
				error_message();
			if (i != argc - 1)
				ft_putchar('\n');
			i++;
		}
	}
	return (0);
}

int		handle_argv(char *argv_i)
{
	int		fd;
	t_map	map;

	if (argv_i == NULL)
		fd = 0;
	else
	{
		fd = open(argv_i, O_RDONLY);
		if (fd == -1)
			return (1);
	}
	if (read_map(fd, &map))
		return (1);
	if (!fd)
		close(fd);
	if (go(&map))
	{
		clear_map(&map);
		return (1);
	}
	clear_map(&map);
	return (0);
}

int		go(t_map *map)
{
	if (check_map(map))
		return (1);
	create_cache(map);
	solve(map);
	clear_cache(map);
	fill_square(map);
	print_map(*map);
	return (0);
}
