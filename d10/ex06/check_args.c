/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:08:16 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 20:00:50 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_valid_op(char *op);

int		check_args(int argc, char **argv)
{
	char *op;

	if (argc != 4)
		return (0);
	op = argv[2];
	if (!is_valid_op(op))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

int		is_valid_op(char *op)
{
	if (op[1] != '\0')
		return (0);
	if (*op == '+' || *op == '-')
		return (1);
	if (*op == '*' || *op == '/' || *op == '%')
		return (1);
	return (0);
}
