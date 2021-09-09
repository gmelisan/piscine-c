/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:38:19 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:09:39 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef unsigned char	t_uchar;

typedef struct		s_btree
{
	void			*content;
	struct s_btree	*left;
	struct s_btree	*right;
	
}					t_btree;

void 				ft_btree_apply_prefix(t_btree *root,
											void (*applyf)(void *));
void 				ft_btree_apply_infix(t_btree *root,
											void (*applyf)(void *));
void 				ft_btree_apply_suffix(t_btree *root,
											void (*applyf)(void *));
t_btree				*ft_btree_search(t_btree *root,
										void *content,
										int (*cmpf)(void *, void *));

/*
** https://habr.com/post/150732/
*/

typedef struct		s_btree_avl
{
	void				*content;
	struct s_btree_avl	*left;
	struct s_btree_avl	*right;
	t_uchar				height;
}						t_btree_avl;

t_btree_avl			*ft_btree_avl_create_node(void *content);
t_btree_avl			*ft_btree_avl_balance(t_btree_avl *root);

t_btree_avl			*ft_btree_avl_insert(t_btree_avl *root,
										void *content,
										int (*cmpf)(void *, void *));
t_btree_avl			*ft_btree_avl_remove(t_btree_avl *root,
										void *content,
										int (*cmpf)(void *, void *));

#endif
