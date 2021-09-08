/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:05:46 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 21:08:05 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	swap_elems(t_list **prev, t_list **first)
{
	t_list *temp1;
	t_list *temp2;

	temp1 = (*first)->next->next;
	(*first)->next->next = *first;
	temp2 = (*first)->next;
	(*first)->next = temp1;
	if (*prev)
		*prev = temp2;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *head_i;
	t_list *head_j;
	t_list *prev;

	head_i = *begin_list;
	if (head_i)
	{
		while (head_i->next)
		{
			head_j = *begin_list;
			while (head_j->next->next)
			{
				if ((*cmp)(head_j->data, head_j->next->data) > 0)
				{
					swap_elems(&prev, &head_j);
				}
				prev = head_j;
				head_j = head_j->next;
			}
			head_i = head_i->next;
		}
	}
}
