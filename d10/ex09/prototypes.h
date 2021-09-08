/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:22:45 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 22:30:33 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		do_op(int value1, char *op, int value2, int *error);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		count_digits(unsigned int nb);
int		power(int nb, int pwr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_usage(int a, int b);

#endif
