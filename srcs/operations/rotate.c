/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:34:57 by arudy             #+#    #+#             */
/*   Updated: 2022/01/05 12:48:33 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	rotate_lst(t_stack **lst)
{
	t_stack	*last;
	t_stack	*first;

	if (*lst && (*lst)->next)
	{
		last = *lst;
		*lst = (*lst)->next;
		first = *lst;
		(*lst)->prev = NULL;
		*lst = ft_lst_last(*lst);
		(*lst)->next = last;
		last->prev = *lst;
		last->next = NULL;
		*lst = first;
		return (1);
	}
	return (0);
}

void	ra(t_stack **lst)
{
	if (rotate_lst(lst))
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **lst)
{
	if (rotate_lst(lst))
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	int	ret;

	ret = 0;
	if (rotate_lst(a))
		ret += 1;
	if (rotate_lst(b))
		ret += 1;
	if (ret > 0)
		ft_putstr_fd("rr\n", 1);
}
