/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2022/01/03 11:50:12 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_tab	*tab;
	t_stack	*a;
	// t_stack	*b;

	if (ac < 3)
		return (0);
	tab = check_input(ac, av);
	if (!tab)
		return (ft_putstr("Error\n"));
	if (tab_is_sorted(tab))
		return (ft_putstr("Input is already sorted\n"));
	a = create_lst(tab);
	// b = NULL;
	print_lst(a);
	// free tab !!
	return (0);
}
