/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 07:28:41 by arudy             #+#    #+#             */
/*   Updated: 2022/01/17 16:03:02 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	*ft_free_tab(int *tab)
{
	free(tab);
	return (0);
}

int	check_double(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

long long	ft_atoll(char *str)
{
	int			i;
	long long	n;

	i = 0;
	n = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

int	is_not_int(char	**input)
{
	int			i;
	int			int_max;
	long long	res;

	i = 0;
	int_max = 2147483647;
	res = 0;
	while (input[i] != NULL)
	{
		res = ft_atoll(input[i]);
		if (input[i][0] == '-' && (res - 1) > int_max)
			return (0);
		else if (input[i][0] != '-' && res > int_max)
			return (0);
		i++;
	}
	return (1);
}

int	*create_tab(char **input, int size)
{
	int	i;
	int	*tab;

	i = 0;
	if (is_not_int(input) == 0)
		return (0);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (input[i] != NULL)
	{
		tab[i] = ft_atoi(input[i]);
		i++;
	}
	if (!check_double(tab, size))
	{
		free(tab);
		return (0);
	}
	return (tab);
}
