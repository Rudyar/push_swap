/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:03:03 by arudy             #+#    #+#             */
/*   Updated: 2022/01/04 19:59:01 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], 1);
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

void	free_tab(t_tab **tab)
{
	int	i;

	i = 0;
	while (i <= (*tab)->size)
	{
		free(*tab);
		i++;
		// Creer un next dans la struct pour free !!
	}
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
