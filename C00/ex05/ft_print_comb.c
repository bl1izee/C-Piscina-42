/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:50:10 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/06 09:58:45 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit1;
	char	digit2;
	char	digit3;

	digit1 = '0';
	while (digit1 <= '9')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '9')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (!(digit1 == '7' && digit2 == '8' && digit3 == '9'))
					write(1, ", ", 2);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
