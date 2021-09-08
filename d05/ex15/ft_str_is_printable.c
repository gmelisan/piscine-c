/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <gmelisan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:16:45 by gmelisan          #+#    #+#             */
/*   Updated: 2018/08/28 11:21:00 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_char_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
