/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:24:06 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/31 16:34:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
int		ft_fibonacci(int index);
int		ft_power(int nb, int power);
int		ft_factorial(int nb);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_str_is_alpha(char *str);
void	ft_str_is_lowercase(char *str);
void	ft_str_is_numeric(char *str);
void	ft_str_is_printable(char *str);
void	ft_str_is_uppercase(char *str);
char	*ft_strcapitalize(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);

#endif
