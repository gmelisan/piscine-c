/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:34:29 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 19:52:03 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head;
	t_list *temp;
	t_list *prev;

	head = *begin_list;
	prev = NULL;
	while (head)
	{
		if ((*cmp)(head->data, data_ref) == 0)
		{
			temp = head->next;
			free(head);
			head = temp;
			if (prev)
				prev->next = head;
		}
		else
		{
			prev = head;
			head = head->next;
		}
	}
}
