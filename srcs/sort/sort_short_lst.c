/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:00:00 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 15:58:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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
		else
			ra(a);
	}
	while (i > 0)
	{
		pa(b, a);
		i--;
		// printf("content : %d\n", (*b)->content);
	}
}
