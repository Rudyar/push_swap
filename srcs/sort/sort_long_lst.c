/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:07:42 by arudy             #+#    #+#             */
/*   Updated: 2022/01/07 18:53:50 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	find_chunk_size(int size)
{
	int	chunk_size;

	if (size <= 10)
		chunk_size = size;
	else if (size <= 25)
		chunk_size = 25 / 3;
	else if (size <= 50)
		chunk_size = 50 / 4;
	else if (size <= 100)
		chunk_size = 100 / 5;
	else if (size <= 200)
		chunk_size = 200 / 7;
	else if (size <= 300)
		chunk_size = 300 / 9;
	else if (size <= 400)
		chunk_size = 400 / 11;
	else if (size <= 500)
		chunk_size = 500 / 13;
	else
		chunk_size = size / 20;
	return (chunk_size);
}

t_stack	*find_smallest_index(t_stack **lst)
{
	t_stack	*tmp;
	int		smallest;

	smallest = (*lst)->index;
	tmp = *lst;
	while (*lst)
	{
		if ((*lst)->index < smallest)
		{
			smallest = (*lst)->index;
			tmp = *lst;
		}
		lst = &(*lst)->next;
	}
	return (tmp);
}

void	push_in_b(t_stack **a, t_stack **b, int chunk_start, int chunk_end)
{
	int	i;

	i = 0;
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
			else if (is_in_first_part(a, chunk_start, chunk_end))
				ra(a);
			else
				rra(a);
		}
		chunk_start = chunk_end;
		chunk_end += find_chunk_size(ft_lst_size(a));
	}
}

void	sort_long_lst(t_stack **a, t_stack **b, int size)
{
	int	i;
	int	chunk_start;
	int	chunk_end;

	chunk_start = 0;
	chunk_end = find_chunk_size(ft_lst_size(a));
	push_in_b(a, b, chunk_start, chunk_end);
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
