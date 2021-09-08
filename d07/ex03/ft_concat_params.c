/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:34:05 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 15:10:12 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_chars_in_str(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*allocate_memory(int argc, char **argv)
{
	char	*result;
	int		i;
	int		n;

	i = 1;
	n = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			n += count_chars_in_str(argv[i]);
			i++;
		}
	}
	else
		return (NULL);
	result = (char*)malloc(sizeof(*result) * (n + argc - 1));
	return (result);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = allocate_memory(argc, argv);
	if (!result)
		return ("");
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			result[k] = argv[i][j];
			j++;
			k++;
		}
		result[k] = '\n';
		k++;
		i++;
	}
	result[k] = '\0';
	return (result);
}
