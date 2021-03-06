/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:31:48 by arudy             #+#    #+#             */
/*   Updated: 2022/01/07 19:02:48 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	a_is_sorted(t_stack **a)
{
	while (*a)
	{
		if ((*a)->next && (*a)->index != ((*a)->next->index - 1))
			return (0);
		a = &(*a)->next;
	}
	return (1);
}

int	ft_lst_size(t_stack **lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (*lst)
	{
		i++;
		lst = &(*lst)->next;
	}
	return (i);
}

int	is_in_first_part(t_stack **lst, int start, int end)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*lst)
	{
		if ((*lst)->index >= start && (*lst)->index <= end)
			break ;
		lst = &(*lst)->next;
		i++;
	}
	while (*lst && (*lst)->next != NULL)
		lst = &(*lst)->next;
	while (*lst)
	{
		if ((*lst)->index >= start && (*lst)->index <= end)
			break ;
		lst = &(*lst)->prev;
		j++;
	}
	if (i < j)
		return (1);
	return (0);
}

int	is_in_second_part(t_stack **lst, int index)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lst_size(lst);
	while (i <= size / 2)
	{
		if ((*lst)->index == index)
			return (0);
		lst = &(*lst)->next;
		i++;
	}
	return (1);
}
