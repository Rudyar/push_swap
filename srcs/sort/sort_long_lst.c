/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:07:42 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 22:31:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_in_a(t_stack **a, t_stack **b, int i, int size)
{
	if ((*a))
		i = (*a)->index - 1;
	else
		i = size - 1;
	while ((*b))
	{
		if ((*b)->index == i)
		{
			pa(b, a);
			i--;
		}
		else if ((*b)->next->index == i)
			sb(b);
		else if (is_in_second_part(b, i))
			rrb(b);
		else
			rb(b);
	}
}

void	sort_long_lst(t_stack **a, t_stack **b, int size)
{
	int	i;
	int	chunk_start;
	int	chunk_end;
// Faire une struct pour les chunk ??
	i = 0;
	chunk_start = 0;
	chunk_end = size / 4;
	while ((*a) && !a_is_sorted(a))
	{
		while ((*a) && i <= chunk_end)
		{
			if ((*a)->index >= chunk_start && (*a)->index <= chunk_end)
			{
				pb(a, b);
				i++;
			}
			else if ((*a)->next->index >= chunk_start
				&& (*a)->next->index <= chunk_end)
				sa(a);
			else
				ra(a);
		}
		chunk_start = chunk_end;
		chunk_end += size / 4;
	}
	push_in_a(a, b, i, size);
}
