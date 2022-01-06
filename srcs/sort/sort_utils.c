/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:31:48 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 16:37:38 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	a_is_sorted(t_stack **a)
{
	while(*a)
	{
		if ((*a)->next && (*a)->index != ((*a)->next->index - 1))
			return (0);
		a = &(*a)->next;
	}
	return (1);
}

int	is_in_second_part(t_stack **lst, int index, int size)
{
	while ((*lst)->index != (size / 2 + index))
	{
		if ((*lst)->index == index)
			return (0);
		lst = &(*lst)->next;
	}
	return (1);
}
