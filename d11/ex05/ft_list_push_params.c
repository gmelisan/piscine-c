/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:30:12 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/05 21:01:21 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*temp;
	t_list	*head;

	i = 0;
	head = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		if (!temp)
			return (head);
		temp->next = head;
		head = temp;
		i++;
	}
	return (head);
}
