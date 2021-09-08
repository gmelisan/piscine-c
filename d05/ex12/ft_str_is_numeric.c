/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:54:11 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/28 10:55:08 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}
