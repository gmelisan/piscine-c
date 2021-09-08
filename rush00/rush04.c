/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 17:11:01 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/26 17:16:55 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);
void	display_str(int x, char edge1, char mid, char edge2);

int		rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
		return (1);
	display_str(x, 'A', 'B', 'C');
	i = 0;
	while (i < y - 2)
	{
		display_str(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		display_str(x, 'C', 'B', 'A');
	return (0);
}

void	display_str(int x, char edge1, char mid, char edge2)
{
	int i;

	ft_putchar(edge1);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (x > 1)
		ft_putchar(edge2);
	ft_putchar('\n');
}
