/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:05:57 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/02 18:07:09 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_digits(char **argv);

int		check_args(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc != 10)
		return (1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			if (!((c >= '0' && c <= '9') || c == '.'))
				return (2);
			j++;
		}
		if (j != 9)
			return (3);
		i++;
	}
	if (count_digits(argv) <= 16)
		return (4);
	return (0);
}

int		count_digits(char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < 10)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
