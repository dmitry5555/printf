/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:21:18 by dlariono          #+#    #+#             */
/*   Updated: 2023/05/09 18:35:10 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc + converts the integer n into a character string

#include "libft.h"

// static int	num_len(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n <= 0)
// 		len = 1;
// 	while (n)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int n)
// {
// 	char	*new;
// 	long	nbr;
// 	int		size;
// 	int		i;

// 	i = 0;
// 	size = num_len(n);
// 	nbr = (long)n;
// 	new = (char *)malloc(sizeof(char) * size + 1);
// 	if (!new)
// 		return (0);
// 	new[size--] = '\0';
// 	if (nbr == 0)
// 		new[0] = '0';
// 	if (nbr < 0)
// 	{
// 		nbr *= -1;
// 		new[0] = '-';
// 	}
// 	while (nbr)
// 	{
// 		new[size--] = (nbr % 10) + '0';
// 		nbr /= 10;
// 	}
// 	while (i < size)
// 	{
// 		write(1, new[i], 1);
// 		i++;
// 	}
// 	free(new);
// 	return (i);
// }

int	ft_pointer(unsigned long int n)
{
	int	len;

	len = 0;
	if (10 <= n)
	{
		ft_pointer(n / 10);
		ft_pointer(n % 10);
	}
	if (n < 16)
	{
		if (n < 10)
			ft_putchar(n + 55);
		else
			ft_putchar(n + 87);
		len++;
	}
	return (1);
}
