/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:39:23 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/30 19:58:43 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		count_chars(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

int		main()
{
	char **a;

	char *str = "    Hello   darkness   my old  friend !";
	printf("\nstr: \"%s\"\n\n", str);
	int i = 0;
	while (i < count_chars(str))
	{
		printf("%p\t%c\n", &str[i], str[i]);
		i++;
	}

	a = ft_split_whitespaces(str);
	
	printf("\nnew array:\n\n");
	i = 0;
	while (a[i] != 0)
	{
		printf("%p\t%s\n", a[i], a[i]);
		i++;
	}
	return (0);
}

/*

1. Count words
2. Allocate memory for char** 
3. Loop over words
3.1 Find word and its length
3.2 Allocate memory for char*
3.3 Copy word by chars
3.4 End with \0
4. Return 

*/
