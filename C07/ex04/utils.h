/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:20:38 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/21 17:10:38 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>

int		check_base(char *base);
int		ft_strlen(char *base);
int		ft_atoi(char *str);
int		ft_recursive_power(int nb, int power);
int		base_decimal(char *nbr, char *base_from);
int		calc_num_from(char c, char *base_from);
int		calc_final_length(int num, int base);
char	*ft_convert_base2(char *nbr, char *base_from, char *base_to);
char	*calc_base_to(char *f_nb, int d_nb, char *base_to, int length_b);

#endif