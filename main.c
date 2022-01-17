/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2022/01/17 10:41:50 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_tab(t_tab *tab)
{
	free(tab->tab);
	free(tab);
	return (0);
}

void	free_all(t_tab *tab, t_stack **a, t_stack **b)
{
	free_tab(tab);
	free_lst(a);
	free_lst(b);
}

int	main(int ac, char **av)
{
	t_tab	*tab;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	tab = check_input(ac, av);
	if (!tab)
		return (ft_putstr_error("Error\n"));
	if (tab_is_sorted(tab))
		return (free_tab(tab));
	a = create_lst(tab);
	b = NULL;
	if (tab->size < 4)
		sort_3_lst(&a, tab->size);
	else if (tab->size <= 10)
		sort_short_lst(&a, &b, tab->size);
	else if (tab->size <= 400)
		sort_long_lst(&a, &b, tab->size);
	else
		sort_radix(&a, &b, tab->size);
	free_all(tab, &a, &b);
	return (0);
}
