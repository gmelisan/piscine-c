/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:42:05 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 21:33:37 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	error_message(void)
{
	ft_puterr("map error\n");
}

void	print_map(t_map map)
{
	int i;

	i = 0;
	while (i < map.y)
	{
		write(1, map.array[i], map.x);
		write(1, "\n", 1);
		i++;
	}
}
