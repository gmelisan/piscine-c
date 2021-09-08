/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:28:37 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/12 21:56:35 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_map
{
	char		**array;
	int			**cache;
	char		empty;
	char		obstacle;
	char		full;
	int			x;
	int			y;
	int			sol_x;
	int			sol_y;
	int			sol_len;
}				t_map;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_puterr(char *str);
void			error_message(void);
int				handle_argv(char *str);
void			solve(t_map *map);
int				check_map(t_map *map);
void			clear_map(t_map *map);
void			clear_cache(t_map *map);
int				go(t_map *map);
int				is_valid(char c, t_map *map);
void			print_map(t_map map);
void			fill_square(t_map *map);
void			create_cache(t_map *map);
int				minimum(int a, int b, int c);
int				is_numeric(char c);
int				ft_atoi(char *str);
int				get_lines_number(int fd, t_map *map);
int				read_map(int fd, t_map *map);
int				get_chars(int fd, t_map *map, char c);
int				count_width(char **str_0, int fd);
char			*duplicate(char *argv, int w);

#endif
