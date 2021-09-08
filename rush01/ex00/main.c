/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:48:40 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/02 21:06:34 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_args(int argc, char **argv);
int		***create_field(void);
void	fill_field(int ***field, char **argv);
void	destroy_field(int ***field);
int		sudoku(int ***field);
void	error_message(int e);
void	show_field(int ***field);
void	ft_putstr(char *str);

/*
** Error codes:
** 0: ok
** 1: argc != 10
** 2: wrong symbol in argv[i]
** 3: char count in argv[i] != 9
** 4: digit count <= 16
*/

int		main(int argc, char **argv)
{
	int ***field;
	int e;

	e = 0;
	e = check_args(argc, argv);
	if (e)
	{
		error_message(e);
		return (e);
	}
	field = create_field();
	fill_field(field, argv);
	ft_putstr("\nInitial field:\n");
	show_field(field);
	e = sudoku(field);
	if (e)
	{
		error_message(e);
		return (e);
	}
	ft_putstr("\nSolution:\n");
	show_field(field);
	ft_putstr("\n");
	destroy_field(field);
	return (e);
}
