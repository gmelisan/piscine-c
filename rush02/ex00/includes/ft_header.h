/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:04:41 by kmurch            #+#    #+#             */
/*   Updated: 2018/09/09 16:08:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			c;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_puterr(char *str);
void				error_message(void);
void				print_colle(int i, int x, int y);
int					ft_atoi(char *str);
void				ft_putnbr(int nb);
int					ft_strcmp(char *s1, char *s2);
int					compare_str(char *str);
t_list				*ft_create_elem(char c);
void				ft_list_push_back(t_list **begin_list, char c);
int					ft_list_size(t_list *begin_list);
void				ft_list_clear(t_list **begin_list);
t_list				*list_stdin(void);
char				*list2str(t_list *list);
char				*rush00(int x, int y);
char				*rush01(int x, int y);
char				*rush02(int x, int y);
char				*rush03(int x, int y);
char				*rush04(int x, int y);
void				handle_stdin(void);
void				handle_argv(char *argv_i);

#endif
