/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ll_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:44:06 by arudy             #+#    #+#             */
/*   Updated: 2022/01/07 17:27:25 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../../push_swap.h"

long long	ft_atoi_ll(const char *str)
{
	int			i;
	long long	sign;
	long long	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * sign);
}

long long int	*create_ll_tab(char **src)
{
	int				i;
	long long int	*tab;

	i = 0;
	tab = malloc(sizeof(long long) * tab_size(src));
	if (!tab)
		return (0);
	while (src[i] != NULL)
	{
		tab[i] = ft_atoi_ll(src[i]);
		i++;
	}
	return (tab);
}
