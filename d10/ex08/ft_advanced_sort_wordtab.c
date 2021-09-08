/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:12:30 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 21:17:12 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_pointers(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	int length;

	i = 0;
	while (tab[i] != 0)
		i++;
	length = i;
	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < length - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				swap_pointers(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
