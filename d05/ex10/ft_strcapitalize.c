/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:43:31 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 12:47:32 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_word(char *str, int start);
int		is_alphanumeric(char c);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += ('A' - 'a');
		}
		i = find_word(str, i);
	}
	return (str);
}

/*
** Finds next word after 'start' index in 'str' and returns its index.
*/

int		find_word(char *str, int start)
{
	int i;

	i = start;
	while (is_alphanumeric(str[i]))
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
	while (!is_alphanumeric(str[i]))
	{
		if (str[i] == '\0')
			return (i);
		i++;
	}
	return (i);
}

/*
** Tests if given character is alphanumeric.
*/

int		is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= ('A' - 'a');
		i++;
	}
	return (str);
}
