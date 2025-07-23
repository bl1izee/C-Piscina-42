/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablomar <pablomar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:10:26 by pablomar          #+#    #+#             */
/*   Updated: 2025/07/23 20:50:07 by pablomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <fcntl.h>

# define MSG_NO_ARG "File name missing."
# define MSG_MUCH_ARG "Too many arguments"
# define MSG_NO_READ "Cannot read file."

int		error_arg(int argc);
void	ft_putstr(char *str);

#endif