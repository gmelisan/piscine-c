/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 02:56:08 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/06 16:28:12 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define BUF_SIZE 4096

typedef enum	e_error
{
	ok,
	no_file_name,
	too_many_args,
	open_error,
	close_error
}				t_error;

void	error_message(t_error e);
void	ft_putstr(char *str);
t_error	display_file(int argc, char **argv);

#endif
