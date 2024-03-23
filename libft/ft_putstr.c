/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:56 by dlariono          #+#    #+#             */
/*   Updated: 2023/05/09 18:16:34 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor.
#include "libft.h"

int	ft_putstr(char *s)
{
	int i;

    i = 0;
    if (!s)
		s = "(null)";
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}
