/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:40:32 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 21:10:23 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	swap_pointers(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				swap_pointers(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
