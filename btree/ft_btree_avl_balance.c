/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_avl_balance.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 09:39:46 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:00:54 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			fix_height(t_btree_avl *root)
{
	t_uchar	hl;
	t_uchar hr;

	hl = root->left ? root->left->height : 0;
	hr = root->right ? root->right->height : 0;
	root->height = hl > hr ? hl : hr;
	root->height++;
}

static int			bfactor(t_btree_avl *root)
{
	t_uchar	hl;
	t_uchar hr;

	hl = root->left ? root->left->height : 0;
	hr = root->right ? root->right->height : 0;
	return ((int)(hr - hl));
}

static t_btree_avl	*rotate_left(t_btree_avl *root)
{
	t_btree_avl *newroot;

	newroot = root->right;
	root->right = newroot->left;
	newroot->left = root;
	fix_height(root);
	fix_height(newroot);
	return (newroot);
}

static t_btree_avl	*rotate_right(t_btree_avl *root)
{
	t_btree_avl *newroot;

	newroot = root->left;
	root->left = newroot->right;
	newroot->right = root;
	fix_height(root);
	fix_height(newroot);
	return (newroot);
}

t_btree_avl		*ft_btree_avl_balance(t_btree_avl *root)
{
	fix_height(root);
	if (bfactor(root) == 2)
	{
		if (bfactor(root->right) < 0)
			root->right = rotate_right(root->right);
		return (rotate_left(root));
	}
	if (bfactor(root) == -2)
	{
		if (bfactor(root->left) > 0)
			root->left = rotate_left(root->left);
		return (rotate_right(root));
	}
	return (root);
}
