/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 02:54:54 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/06 16:26:48 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	error_message(t_error e)
{
	if (e == no_file_name)
		ft_puterr("File name missing.\n");
	if (e == too_many_args)
		ft_puterr("Too many arguments.\n");
	if (e == open_error)
		ft_puterr("Error during open()\n");
	if (e == close_error)
		ft_puterr("Error during close()\n");
}
