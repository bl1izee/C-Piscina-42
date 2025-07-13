/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:26:35 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:43:47 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (ft_str_is_uppercase(str[pos]))
			str[pos] = str[pos] + 32;
		pos++;
	}
	return (str);
}
