/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 16:00:07 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/24 16:00:54 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int i_a;
	int i_b;

	i_a = *a;
	i_b = *b;
	*a = i_a / i_b;
	*b = i_a % i_b;
}