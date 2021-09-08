/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 19:17:07 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/02 21:30:22 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	error_message(int e)
{
	ft_putstr("Error!\n");
	if (e == 1)
		ft_putstr("Wrong number of arguments, should 9\n");
	else if (e == 2)
		ft_putstr("Wrong symbol, should be digits or dot\n");
	else if (e == 3)
		ft_putstr("Wrong length of argument, should be 9\n");
	else if (e == 4)
		ft_putstr("Solution needs digit count to be > 16\n");
	else
		ft_putstr("Something went wrong\n");
}

void	show_field(int ***field)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(*field[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

/*
** i = 0;
** while (i < 9)
** {
** j = 0;
** while (j < 9)
** {
** if (!*field[i][j]) // if first element of field[i][j] is zero
** {
** printf("Possible values:  %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
** field[i][j][1], field[i][j][2],
** field[i][j][3], field[i][j][4], field[i][j][5],
** field[i][j][6], field[i][j][7], field[i][j][8], field[i][j][9]);
** }
** j++;
** }
** i++;
** }
*/
