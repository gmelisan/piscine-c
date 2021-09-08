/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:42:48 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 22:28:45 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		check_div_by_zero(char *op, int value2);

int		do_op(int value1, char *op, int value2, int *error)
{
	int i;

	*error = 0;
	if (check_div_by_zero(op, value2))
	{
		*error = 1;
		return (0);
	}
	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(g_opptab[i].op, op) == 0)
			return (g_opptab[i].f(value1, value2));
		i++;
	}
	g_opptab[5].f(value1, value2);
	*error = 1;
	return (0);
}

int		check_div_by_zero(char *op, int value2)
{
	if (op[1] != '\0')
		return (0);
	if (*op == '/' && value2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (*op == '%' && value2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int		ft_usage(int a, int b)
{
	a++;
	b++;
	ft_putstr("error : only [ + - * / %] are accepted.\n");
	return (0);
}
