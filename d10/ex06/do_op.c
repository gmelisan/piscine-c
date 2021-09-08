/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:42:48 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 19:50:43 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		check_div_by_zero(char op, int value2);

int		do_op(int value1, char op, int value2, int *error)
{
	int (*f[5])(int, int);

	f[0] = plus;
	f[1] = minus;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	*error = 0;
	if (check_div_by_zero(op, value2))
	{
		*error = 1;
		return (0);
	}
	if (op == '+')
		return (f[0](value1, value2));
	if (op == '-')
		return (f[1](value1, value2));
	if (op == '*')
		return (f[2](value1, value2));
	if (op == '/')
		return (f[3](value1, value2));
	if (op == '%')
		return (f[4](value1, value2));
	*error = 1;
	return (0);
}

int		check_div_by_zero(char op, int value2)
{
	if (op == '/' && value2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (op == '%' && value2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
