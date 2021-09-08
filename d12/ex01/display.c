/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:40:51 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/06 19:56:37 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

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

void	error_message(char *argv_i)
{
	ft_puterr("ft_cat: ");
	ft_puterr(argv_i);
	ft_puterr(": ");
	if (errno == ENOENT)
		ft_puterr("No such file or directory\n");
	else if (errno == EISDIR)
		ft_puterr("Is a directory\n");
	else if (errno == EACCES)
		ft_puterr("Permission denied\n");
	else
		ft_puterr("Unknown error");
}
