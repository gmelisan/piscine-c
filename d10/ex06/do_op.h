/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:42:10 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 19:35:45 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		do_op(int value1, char op, int value2, int *error);
int		ft_atoi(char *str);
int		check_args(int argc, char **argv);
void	ft_putnbr(int nb);
int		count_digits(unsigned int nb);
int		power(int nb, int pwr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		plus(int a, int b);
int		minus(int a, int b);
int		div(int a, int b);
int		mul(int a, int b);
int		mod(int a, int b);

#endif
