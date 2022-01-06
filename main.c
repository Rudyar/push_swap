/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 19:14:22 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_tab *tab, t_stack **a, t_stack **b)
{
	free(tab->tab);
	free(tab);
	free_lst(a);
	free_lst(b);
}

int	main(int ac, char **av)
{
	t_tab	*tab;
	t_stack	*a;
	t_stack	*b;

	if (ac < 3)
		return (0);
	tab = check_input(ac, av);
	if (!tab)
		return (ft_putstr_error("Error\n"));
	if (tab_is_sorted(tab))
		return (0);
	a = create_lst(tab);
	b = NULL;
	if (tab->size < 4)
		sort_3_lst(&a, tab->size);
	else
		sort_short_lst(&a, &b, tab->size);
	// else
	// 	sort_long_lst(&a, &b, tab->size);
	// print_lst(&a, &b);
	free_all(tab, &a, &b);
	return (0);
}
// Virer libft ??
