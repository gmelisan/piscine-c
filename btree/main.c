/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 10:21:58 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/17 11:25:25 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		intcmp(void *a, void *b)
{
	int ia;
	int ib;

	ia = a ? *((int *)a) : 0;
	ib = b ? *((int *)b) : 0;
	return (ia - ib);
}

int		*newint(int a)
{
	int *ret;

	ret = (int *)malloc(sizeof(int));
	*ret = a;
	return (ret);
}

void	show(void *number)
{
	printf("%d\n", *((int *)number));
}

int		main(void)
{
	t_btree_avl *tree;

	tree = ft_btree_avl_insert(NULL, (void *)newint(1), intcmp);
	tree = ft_btree_avl_insert(tree, (void *)newint(2), intcmp);
	tree = ft_btree_avl_insert(tree, (void *)newint(3), intcmp);
	tree = ft_btree_avl_insert(tree, (void *)newint(4), intcmp);
	tree = ft_btree_avl_insert(tree, (void *)newint(5), intcmp);

	ft_btree_apply_prefix((t_btree *)tree, show);
	return (0);
}
