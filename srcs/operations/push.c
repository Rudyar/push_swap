/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:23:11 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 15:59:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_lst(t_stack **src, t_stack **dst)
{
	*src = (*src)->next;
	if (!*dst)
	{
		*dst = (*src)->prev;
		(*dst)->next = NULL;
	}
	else
	{
		(*dst)->prev = (*src)->prev;
		(*dst)->prev->next = *dst;
		*dst = (*dst)->prev;
	}
	(*src)->prev = NULL;
}

void	push_no_lst(t_stack **src, t_stack **dst)
{
	if (!*dst)
	{
		*dst = *src;
		(*dst)->next = NULL;
	}
	else
	{
		(*dst)->prev = *src;
		(*dst)->prev->next = *dst;
		*dst = (*dst)->prev;
	}
	*src = NULL;
}

void	pb(t_stack **src, t_stack **dst)
{
	if (*src)
	{
		if ((*src)->next)
			push_lst(src, dst);
		else
			push_no_lst(src, dst);
		ft_putstr_fd("pb\n", 1);
	}
}

void	pa(t_stack **src, t_stack **dst)
{
	if (*src)
	{
		if ((*src)->next)
			push_lst(src, dst);
		else
			push_no_lst(src, dst);
		ft_putstr_fd("pa\n", 1);
	}
}
