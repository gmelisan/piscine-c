/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 11:49:32 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/31 12:18:26 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *str);
void	copy(char **tab, char *result, char *sep, int words);

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		count;
	char	*result;
	int		words;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		count += length(tab[i]);
		i++;
	}
	words = i;
	count += length(sep) * (i - 1) + 1;
	result = (char*)malloc(sizeof(*result) * count);
	copy(tab, result, sep, words);
}

int		length(char *str)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

void	copy(char **tab, char *result, char *sep, int words)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < words)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			result[k] = tab[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			result[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	result[k] = '\0';
}
