/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:04:44 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/28 11:14:14 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
