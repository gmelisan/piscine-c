/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:29:00 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 19:09:56 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** 00:00 = 12:00 a.m.
** 01:00 = 01:00 a.m
**
** 12:00 = 12:00 p.m.
** 13:00 = 01:00 p.m.
*/

void	get_12_and_suf(int hour, int *hour12, char **suffix)
{
	if (hour == 0)
	{
		*hour12 = 12;
		*suffix = "A.M.";
	}
	if (hour >= 1 && hour <= 11)
	{
		*hour12 = hour;
		*suffix = "A.M.";
	}
	if (hour == 12)
	{
		*hour12 = 12;
		*suffix = "P.M.";
	}
	if (hour >= 13 && hour <= 23)
	{
		*hour12 = hour - 12;
		*suffix = "P.M.";
	}
	if (hour == 24)
	{
		get_12_and_suf(0, hour12, suffix);
	}
}

void	ft_takes_place(int hour)
{
	int		h12_1;
	char	*s_1;
	int		h12_2;
	char	*s_2;

	if (hour >= 0 && hour <= 24)
	{
		get_12_and_suf(hour, &h12_1, &s_1);
		if (hour == 24)
			hour = 0;
		get_12_and_suf(hour + 1, &h12_2, &s_2);
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 %s AND %d.00 %s\n", h12_1, s_1, h12_2, s_2);
	}
}
