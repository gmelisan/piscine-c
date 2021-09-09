/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_avl_insert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 09:34:02 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:22:05 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree_avl			*ft_btree_avl_insert(t_btree_avl *root,
										void *content,
										int (*cmpf)(void *, void *))
{
	if (!root)
		return (ft_btree_avl_create_node(content));
	if (cmpf(content, root->content) < 0)
		root->left = ft_btree_avl_insert(root, content, cmpf);
	else
		root->right = ft_btree_avl_insert(root, content, cmpf);
	return (ft_btree_avl_balance(root));
}
