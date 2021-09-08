/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 15:55:30 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 22:26:56 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prototypes.h"

void	ft_putnbr(int nb)
{
	int				div;
	int				mod;
	int				count;
	int				i;
	unsigned int	unb;

	unb = nb;
	if (nb < 0)
	{
		unb *= -1;
		ft_putchar('-');
	}
	count = count_digits(unb);
	i = 1;
	while (i <= count)
	{
		div = unb / power(10, count - i);
		mod = unb % power(10, count - i);
		ft_putchar(div + '0');
		unb = mod;
		i++;
	}
}

int		power(int nb, int pwr)
{
	int i;
	int result;

	if (pwr < 0)
		return (0);
	if (pwr == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < pwr)
	{
		result *= nb;
		i++;
	}
	return (result);
}

int		count_digits(unsigned int nb)
{
	int count;

	if (nb == 0)
		return (1);
	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
