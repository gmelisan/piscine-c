/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:40:17 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 12:28:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int size;
	int i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	array = (int*)malloc(sizeof(*array) * size);
	i = 0;
	while (i < size)
	{
		array[i] = i + min;
		i++;
	}
	*range = array;
	return (size);
}
