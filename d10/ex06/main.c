/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:46:23 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 19:52:06 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	int		value1;
	char	op;
	int		value2;
	int		error;
	int		result;

	if (!check_args(argc, argv))
	{
		return (0);
	}
	value1 = ft_atoi(argv[1]);
	op = *argv[2];
	value2 = ft_atoi(argv[3]);
	result = do_op(value1, op, value2, &error);
	if (!error)
	{
		ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
