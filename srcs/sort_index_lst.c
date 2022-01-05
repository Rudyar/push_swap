/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:51:16 by arudy             #+#    #+#             */
/*   Updated: 2022/01/05 19:05:24 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_sorted(t_stack **lst)
{
	while (*lst)
	{
		if ((*lst)->index == -1)
			return (0);
		*lst = (*lst)->next;
	}
	return (1);
}

int	find_next(t_stack **lst, int highest, int current)
{
	int		next;

	next = highest;
	while (*lst)
	{
		if ((*lst)->content < next && (*lst)->content > current)
			next = (*lst)->content;
		*lst = (*lst)->next;
	}
	return (next);
}

void	put_index(t_stack **lst, t_stack *highest, t_stack *smallest)
{
	t_stack	*first;
	int		i;
	int		next;

	first = *lst;
	i = 1;
	next = smallest->index;
	while (!index_sorted(lst))
	{
		next = find_next(lst, highest->content, next);
		printf("content : %d\n", (*lst)->content);
		while ((*lst)->content != next)
		{
			*lst = (*lst)->next;
		}
		(*lst)->index = i;
		*lst = first;
		i++;
	}
}

void	sort_index_lst(t_stack **lst, int max)
{
	t_stack *highest;
	t_stack *smallest;

	highest = find_highest(lst, max);
	smallest = find_smallest(lst);
	put_index(lst, highest, smallest);
}
