/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 07:28:41 by arudy             #+#    #+#             */
/*   Updated: 2022/01/07 17:27:33 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_double(long long *tab, int size)
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

int	is_not_int(long long *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > 2147483647 || tab[i] < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	*create_tab(long long *ll_tab, int size)
{
	int	i;
	int	*tab;

	i = 0;
	if (!(check_double(ll_tab, size)) || !(is_not_int(ll_tab, size)))
		return (0);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (i < size)
	{
		tab[i] = ll_tab[i];
		i++;
	}
	free(ll_tab);
	return (tab);
}
