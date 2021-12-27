/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2021/12/27 20:02:08 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_tab	*tab;
	t_stack	*a;
	// t_stack	*b;

	tab = check_input(ac, av);
	if (!tab)
		return (ft_putstr("Error\n"));
	if (tab_is_sorted(tab))
		return (ft_putstr("\n"));
	a = create_lst(tab);
	// b = init_lst();
	while (a->next != NULL)
	{
		printf("%d\n", a->content);\
		if (a->next != NULL)
			a = a->next;
		else
			break;
	}
	return (0);
}
