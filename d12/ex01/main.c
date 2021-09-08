/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:10:18 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/06 20:17:28 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		loop_read(char *path)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (-1);
	return (0);
}

void	copy_stdin_stdout(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		copy_stdin_stdout();
	else
	{
		i = 1;
		while (i < argc)
		{
			if (loop_read(argv[i]) == -1)
				error_message(argv[i]);
			i++;
		}
	}
	return (0);
}
