/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:00:06 by gmelisan          #+#    #+#             */
/*   Updated: 2018/09/04 17:44:47 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort_asc(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort_flag;

	i = 0;
	sort_flag = 1;
	while ((i < length - 1) && sort_flag)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			sort_flag = 1;
		else
			sort_flag = 0;
		i++;
	}
	if (sort_flag)
		return (1);
	return (0);
}

int		ft_is_sort_des(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort_flag;

	i = 0;
	sort_flag = 1;
	while ((i < length - 1) && sort_flag)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			sort_flag = 1;
		else
			sort_flag = 0;
		i++;
	}
	if (sort_flag)
		return (1);
	return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_sort_asc(tab, length, f) || ft_is_sort_des(tab, length, f))
		return (1);
	return (0);
}
