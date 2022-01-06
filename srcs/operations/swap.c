/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:04:35 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 18:47:38 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	swap(t_stack **lst)
{
	int	tmp_content;
	int	tmp_index;

	if (lst && (*lst)->next != NULL)
	{
		tmp_content = (*lst)->content;
		tmp_index = (*lst)->index;
		(*lst)->content = (*lst)->next->content;
		(*lst)->index = (*lst)->next->index;
		(*lst)->next->content = tmp_content;
		(*lst)->next->index = tmp_index;
		return (1);
	}
	return (0);
}

void	sa(t_stack **a)
{
	if (!swap(a))
		return ;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack **b)
{
	if (!swap(b))
		return ;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!swap(a) || !swap(b))
		return ;
	ft_putstr_fd("ss\n", 1);
}
