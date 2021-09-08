/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:55:25 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 20:01:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *head;

	head = *begin_list1;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
