/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:18:19 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 20:59:10 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*head;
	int		count;

	count = 1;
	head = begin_list;
	if (head)
	{
		while (!head->next)
		{
			head = head->next;
			count++;
		}
		return (count);
	}
	return (0);
}
