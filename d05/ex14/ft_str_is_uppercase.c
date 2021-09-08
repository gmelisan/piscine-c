/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:10:39 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/28 11:14:05 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
