/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:23:55 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:42:46 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercas(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (ft_str_is_lowercas(str[pos]))
			str[pos] = str[pos] - 32;
		pos++;
	}
	return (str);
}
