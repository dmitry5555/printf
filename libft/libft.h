/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:54:10 by dlariono          #+#    #+#             */
/*   Updated: 2023/05/09 15:17:31 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

// static int	num_len(int n);
size_t	ft_strlen(const char *a);
int	ft_putchar(char c);
int	ft_putstr(char *s);
char	*ft_itoa(int n);
int	ft_strchr(const char *str, int c);

#endif
