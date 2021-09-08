/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:46:49 by kmurch            #+#    #+#             */
/*   Updated: 2018/09/09 01:49:20 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

t_list	*ft_create_elem(char c)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(*new));
	new->c = c;
	new->next = NULL;
	return (new);
}

void	ft_list_push_back(t_list **begin_list, char c)
{
	t_list *i;

	if (*begin_list)
	{
		i = *begin_list;
		while (i->next)
			i = i->next;
		i->next = ft_create_elem(c);
	}
	else
		*begin_list = ft_create_elem(c);
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*head;
	int		count;

	count = 1;
	head = begin_list;
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			count++;
		}
		return (count);
	}
	return (0);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *head;
	t_list *temp;

	head = *begin_list;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
