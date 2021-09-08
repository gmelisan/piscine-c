/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:45:13 by kmurch            #+#    #+#             */
/*   Updated: 2018/09/09 02:02:20 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	get_symbol01(int x, int y, int *x1, int *y1)
{
	if ((*x1 == 1 && *y1 == 1) || (*x1 == x && *y1 == y && *x1 > 1 && *y1 > 1))
		return ('/');
	if ((*x1 == 1 && *y1 == y) || (*x1 == x && *y1 == 1))
		return ('\\');
	if (*x1 != 1 && *x1 != x && *y1 != 1 && *y1 != y)
		return (' ');
	else
		return ('*');
	return (0);
}

char	*get_string01(int x, int y)
{
	int		x1;
	int		y1;
	char	*str;
	int		i;

	str = (char*)malloc(sizeof(*str) * (((x + 1) * y) + 1));
	i = 0;
	y1 = 1;
	while (y1 <= y)
	{
		x1 = 1;
		while (x1 <= x)
		{
			str[i] = get_symbol01(x, y, &x1, &y1);
			x1++;
			i++;
		}
		str[i] = '\n';
		i++;
		y1++;
	}
	str[i] = '\0';
	return (str);
}

char	*rush01(int x, int y)
{
	if (x > 0 && y > 0)
		return (get_string01(x, y));
	return ("");
}
