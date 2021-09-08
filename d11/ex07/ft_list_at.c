/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:26:36 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 15:42:50 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	counter;
	t_list			*head;

	counter = 0;
	head = begin_list;
	while (head)
	{
		if (nbr == counter)
			return (head);
		counter++;
		head = head->next;
	}
	return (0);
}
