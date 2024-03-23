/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:33 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:44:47 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// returns string A length

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}
