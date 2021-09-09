/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_avl_remove.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 09:59:43 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:09:20 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static t_btree_avl	*find_min(t_btree_avl *root)
{
	return (root->left ? find_min(root->left) : root);
}

static t_btree_avl	*remove_min(t_btree_avl *root)
{
	if (!root->left)
		return (root->right);
	root->left = remove_min(root->left);
	return (ft_btree_avl_balance(root));
}

t_btree_avl			*ft_btree_avl_remove(t_btree_avl *root,
										void *content,
										int (*cmpf)(void *, void *))
{
	t_btree_avl *left;
	t_btree_avl *right;
	t_btree_avl *min;

	if (!root)
		return (NULL);
	if (cmpf(content, root->content) < 0)
		root->left = ft_btree_avl_remove(root->left, content, cmpf);
	else if (cmpf(content, root->content) > 0)
		root->right = ft_btree_avl_remove(root->right, content, cmpf);
	else
	{
		left = root->left;
		right = root->right;
		free(root->content);
		free(root);
		if (!right)
			return (left);
		min = find_min(right);
		min->right = remove_min(right);
		min->left = left;
		return (ft_btree_avl_balance(min));
	}
	return (ft_btree_avl_balance(root));
}
