/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:50:49 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/29 19:05:40 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int size;
	int i;

	size = max - min;
	if (size <= 0)
		return (0);
	array = (int*)malloc(sizeof(*array) * size);
	i = 0;
	while (i < size)
	{
		array[i] = i + min;
		i++;
	}
	return (array);
}
