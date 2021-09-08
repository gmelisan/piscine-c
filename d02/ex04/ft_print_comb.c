/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:23:22 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/23 17:27:10 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_a = 0;
int g_b = 0;
int g_c = 0;

void	ft_print_comb(void)
{
	while (g_a <= 7)
	{
		g_b = g_a + 1;
		while (g_b <= 8)
		{
			g_c = g_b + 1;
			while (g_c <= 9)
			{
				ft_putchar(g_a + 48);
				ft_putchar(g_b + 48);
				ft_putchar(g_c + 48);
				if (g_a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				g_c++;
			}
			g_b++;
		}
		g_a++;
	}
}
