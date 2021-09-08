/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:30:28 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/31 13:15:37 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort(int *tab, int length);

int		ft_unmatch(int *tab, int length)
{
	int i;

	sort(tab, length);
	i = 0;
	while (i < length)
	{
		if (tab[i] != tab[i + 1])
			return (tab[i]);
		i += 2;
	}
	return (0);
}

void	sort(int *tab, int length)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < length - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
