/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:00:40 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/09 16:11:37 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		handle_stdin();
	else
		while (i < argc)
			handle_argv(argv[i++]);
	return (0);
}

void	handle_stdin(void)
{
	t_list	*list;
	char	*str;

	list = list_stdin();
	str = list2str(list);
	ft_list_clear(&list);
	if (!compare_str(str))
		error_message();
	free(str);
	ft_putchar('\n');
}

void	handle_argv(char *argv_i)
{
	if (!compare_str(argv_i))
		error_message();
	ft_putchar('\n');
}

t_list	*list_stdin(void)
{
	char	c;
	t_list	*list;

	c = 0;
	list = 0;
	while (read(0, &c, 1))
		ft_list_push_back(&list, c);
	return (list);
}

char	*list2str(t_list *list)
{
	int		count;
	char	*str;
	int		i;

	count = ft_list_size(list);
	str = (char*)malloc(sizeof(*str) * (count + 1));
	i = 0;
	while (list)
	{
		str[i] = list->c;
		list = list->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}
