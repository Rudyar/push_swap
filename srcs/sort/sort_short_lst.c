/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:00:00 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 19:22:28 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_3_lst(t_stack **a, int size)
{
	int	i;

	i = size - 1;
	while (!a_is_sorted(a))
	{
		if ((*a)->index == i)
			i--;
		else if ((*a)->next->index == i)
		{
			sa(a);
			i--;
		}
		else if ((*a)->next->next && (*a)->next->next->index == i)
			rra(a);
		else
			ra(a);
	}
}

void	sort_short_lst(t_stack **a, t_stack **b, int size)
{
	int	i;

	i = 0;
	while (i < size && !a_is_sorted(a))
	{
		if ((*a)->index == i)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->next->index == i)
			sa(a);
		else if (is_in_second_part(a, i))
			rra(a);
		else
			ra(a);
	}
	while (*b)
		pa(b, a);
}
