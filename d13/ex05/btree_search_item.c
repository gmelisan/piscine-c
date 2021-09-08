/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:29:05 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/07 22:19:08 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	void	*ret;

	if (root)
	{
		if (root->left)
		{
			ret = btree_search_item(root->left, data_ref, cmpf);
			if (ret)
				return (ret);
		}
		if ((*cmpf)(root->item, data_ref) == 0)
			return (root->item);
		if (root->right)
		{
			ret = btree_search_item(root->right, data_ref, cmpf);
			if (ret)
				return (ret);
		}
	}
	return (0);
}
