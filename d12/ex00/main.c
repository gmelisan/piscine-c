/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 02:51:39 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/06 18:13:46 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int argc, char **argv)
{
	t_error e;

	e = display_file(argc, argv);
	if (e)
		error_message(e);
	return (e);
}
