/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:03:03 by arudy             #+#    #+#             */
/*   Updated: 2022/01/17 11:04:34 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_tab	*free_tab_tab(t_tab *tab, long long int *ll_tab)
{
	free(tab);
	free(ll_tab);
	return (0);
}

int	ft_putstr_error(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], 2);
			i++;
		}
	}
	return (0);
}

int	tab_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	return (i);
}

t_tab	*init_tab(void)
{
	t_tab	*tab;

	tab = malloc(sizeof(*tab));
	if (!tab)
		return (0);
	tab->size = 0;
	return (tab);
}

int	check_sign(char **src)
{
	int	i;
	int	j;

	i = 0;
	while (src[i])
	{
		j = 0;
		while (src[i][j])
		{
			if ((src[i][j] == '+' && !ft_isdigit(src[i][j + 1])) ||
				(src[i][j] == '-' && !ft_isdigit(src[i][j + 1])))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
