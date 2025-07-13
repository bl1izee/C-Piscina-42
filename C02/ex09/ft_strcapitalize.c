/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:28:50 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/13 13:44:57 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	convert_to_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (ft_str_is_uppercase(str[pos]))
			str[pos] = str[pos] + 32;
		pos++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	pos;
	int	upper;

	pos = 0;
	upper = 1;
	convert_to_lowercase(str);
	while (str[pos])
	{
		if ((str[pos] < 'a' || str[pos] > 'z')
			&& (str[pos] < 'A' || str[pos] > 'z')
			&& (str[pos] < '0' || str[pos] > '9'))
			upper = 1;
		if (((str[pos] >= 'A' && str[pos] <= 'Z')
				|| (str[pos] >= '0' && str[pos] <= '9')) && upper)
			upper = 0;
		if ((str[pos] >= 'a' && str[pos] <= 'z') && upper)
		{
			str[pos] = str[pos] - 32;
			upper = 0;
		}
		pos++;
	}
	return (str);
}
