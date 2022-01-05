/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:12:06 by arudy             #+#    #+#             */
/*   Updated: 2022/01/05 15:35:48 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	reverse_rotate_lst(t_stack **lst)
{
	t_stack	*last;
	t_stack	*first;

	if (*lst && (*lst)->next)
	{
		last = *lst;
		*lst = ft_lst_last(*lst);
		first = *lst;
		(*lst)->next = last;
		(*lst)->next->prev = *lst;
		(*lst)->prev->next = NULL;
		(*lst)->prev = NULL;
		*lst = first;
		return (1);
	}
	return (0);
}

void	rra(t_stack **lst)
{
	if (reverse_rotate_lst(lst))
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **lst)
{
	if (reverse_rotate_lst(lst))
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	int	ret;

	ret = 0;
	if (reverse_rotate_lst(a))
		ret += 1;
	if (reverse_rotate_lst(b))
		ret += 1;
	if (ret > 0)
		ft_putstr_fd("rrr\n", 1);
}
