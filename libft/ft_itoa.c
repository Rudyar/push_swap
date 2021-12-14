/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:57:24 by arudy             #+#    #+#             */
/*   Updated: 2021/11/29 17:13:26 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(long nbr)
{
	int	size;

	size = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	long	nbr;
	char	*dst;

	nbr = n;
	size = n_len(nbr);
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		dst[0] = '-';
	}
	dst[size] = '\0';
	if (nbr == 0)
		dst[0] = '0';
	while (nbr != 0)
	{
		dst[--size] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (dst);
}
