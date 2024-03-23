/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:48 by dlariono          #+#    #+#             */
/*   Updated: 2023/05/08 15:00:00 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches for the first occurrence of the character C in the string
// pointed STR returns a pointer to the first
// occurrence of the character c in the string
// str, or NULL if the character is not found
#include "libft.h"

int	ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (unsigned char)c)
		{
			return (1);
		}
		i++;
	}
	return (i);
}
