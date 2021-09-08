/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:10:07 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/23 19:12:05 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	last_block(int a, int b);

void	print_numbers(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			last_block(a, b);
			b++;
		}
		a++;
	}
}

void	last_block(int a, int b)
{
	int c;
	int d;

	c = a;
	while (c <= 9)
	{
		d = b + 1;
		while (d <= 9)
		{
			print_numbers(a + 48, b + 48, c + 48, d + 48);
			if (!(a == 9 && b == 8 && c == 9 && d == 9))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
	}
}

void	print_numbers(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}
