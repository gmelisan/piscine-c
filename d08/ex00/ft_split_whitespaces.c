/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:12:58 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 20:12:00 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		find_word(char *str, int start);
int		count_words(char *str);
int		calc_word_len(char *str, int start);
void	copy_words(char *str, char **result);

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**result;

	words = count_words(str);
	result = (char**)malloc(sizeof(*result) * (words + 1));
	copy_words(str, result);
	return (result);
}

void	copy_words(char *str, char **result)
{
	int i;
	int j;
	int k;
	int len;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		len = calc_word_len(str, i);
		result[j] = (char *)malloc(sizeof(**result) * (len + 1));
		k = 0;
		while (k < len)
		{
			result[j][k] = str[i + k];
			k++;
		}
		result[j][k] = '\0';
		i = find_word(str, i);
		j++;
	}
	result[j] = 0;
}

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		i = find_word(str, i);
		count++;
	}
	return (count);
}

int		find_word(char *str, int start)
{
	int i;

	i = start;
	while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
	return (i);
}

int		calc_word_len(char *str, int start)
{
	int i;

	i = start;
	while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			&& str[i] != '\0')
	{
		i++;
	}
	return (i - start);
}
