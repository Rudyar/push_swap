/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 10:56:39 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	b = create_lst(tab);
	// a = NULL;
	print_lst(&a, &b);
	sa(&a);
	print_lst(&a, &b);
	sa(&a);
	print_lst(&a, &b);
	sb(&b);
	print_lst(&a, &b);
	sb(&b);
	sb(&b);
	sa(&a);
	sa(&a);
	print_lst(&a, &b);
	sb(&b);
	print_lst(&a, &b);
	pb(&a, &b);
	print_lst(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	print_lst(&a, &b);
	pa(&b, &a);
	pa(&b, &a);
	print_lst(&a, &b);
	pa(&b, &a);
	pa(&b, &a);
	print_lst(&a, &b);
	rra(&a);
	print_lst(&a, &b);
	rrb(&b);
	print_lst(&a, &b);
	rrr(&a, &b);
	print_lst(&a, &b);
	free(tab->tab);
	free(tab);
	free_lst(&a);
	free_lst(&b);
	return (0);
}

// Virer libft ??
// Virer smallest ??

