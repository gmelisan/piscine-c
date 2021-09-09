/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 09:30:15 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:11:46 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btree_search(t_btree *root,
							void *content,
							int (*cmpf)(void *, void *))
{
	t_btree	*ret;

	if (root)
	{
		if (root->left)
		{
			ret = ft_btree_search(root->left, content, cmpf);
			if (ret)
				return (ret);
		}
		if ((*cmpf)(root->content, content) == 0)
			return (root);
		if (root->right)
		{
			ret = ft_btree_search(root->right, content, cmpf);
			if (ret)
				return (ret);
		}
	}
	return (NULL);
}
