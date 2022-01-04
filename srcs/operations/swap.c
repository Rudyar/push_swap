/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:04:35 by arudy             #+#    #+#             */
/*   Updated: 2022/01/04 22:03:43 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	swap(t_stack *lst)
{
	int	tmp;

	if (lst && lst->next != NULL)
	{
		tmp = lst->content;
		lst->content = lst->next->content;
		lst->next->content = tmp;
		return (1);
	}
	return (0);
}

void	sa(t_stack *a)
{
	if (!swap(a))
		return ;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b)
{
	if (!swap(b))
		return ;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	if (!swap(a) || !swap(b))
		return ;
	ft_putstr_fd("ss\n", 1);
}
