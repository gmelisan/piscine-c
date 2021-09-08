/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 15:43:42 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/08 18:56:58 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	char *str;

	if (argc == 3)
	{
		str = rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
		if (str)
			ft_putstr(str);
		free(str);
	}
	else
		ft_putchar('\n');
	return (0);
}
