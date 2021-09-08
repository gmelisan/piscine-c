/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:57:18 by kmurch            #+#    #+#             */
/*   Updated: 2018/09/09 16:09:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_atoi(char *str)
{
	int		flag;
	int		ret;

	if (str[0] == '\n' || str[0] == '\t' || str[0] == '\v' ||
		str[0] == '\f' || str[0] == '\r' || str[0] == ' ')
		ft_atoi(++str);
	if (((flag = 1) || 1) && (str[0] == '-' || str[0] == '+'))
	{
		if (str[0] == '-')
			flag = -flag;
		str++;
	}
	ret = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (ret);
		ret = ret * 10 + (*str++ - '0') * flag;
	}
	return (ret);
}
