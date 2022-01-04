/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2022/01/04 19:55:09 by arudy            ###   ########.fr       */
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
		return (ft_putstr("Error\n"));
	if (tab_is_sorted(tab))
		return (ft_putstr("Input is already sorted\n"));
	a = create_lst(tab);
	b = create_lst(tab);
	print_lst(&a, &b);
	sa(a);
	print_lst(&a, &b);
	sb(b);
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
	free_tab(&tab);
	free_lst(&a);
	free_lst(&b);
	return (0);
}
