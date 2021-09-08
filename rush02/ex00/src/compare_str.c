/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:50:44 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/09 16:10:31 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	get_str_x_y(char *str, int *x, int *y)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	*x = i;
	*y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			(*y)++;
		i++;
	}
}

char	*get_rush_str(int i, int x, int y)
{
	if (i == 0)
		return (rush00(x, y));
	if (i == 1)
		return (rush01(x, y));
	if (i == 2)
		return (rush02(x, y));
	if (i == 3)
		return (rush03(x, y));
	if (i == 4)
		return (rush04(x, y));
	return ("");
}

int		compare_str(char *str)
{
	int i;
	int x;
	int y;
	int first;

	x = 0;
	y = 0;
	get_str_x_y(str, &x, &y);
	i = 0;
	first = 1;
	while (i < 5)
	{
		if (ft_strcmp(get_rush_str(i, x, y), str) == 0)
		{
			if (!first)
				ft_putstr(" || ");
			first = 0;
			print_colle(i, x, y);
		}
		i++;
	}
	return (first ? 0 : 1);
}
