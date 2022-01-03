/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:04:35 by arudy             #+#    #+#             */
/*   Updated: 2022/01/03 14:58:18 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../push_swap.h"

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

int	sa(t_stack *a)
{
	if (!swap(a))
		return (0);
	ft_putstr("sa\n");
	return (1);
}

int	sb(t_stack *b)
{
	if (!swap(b))
		return (0);
	ft_putstr("sb\n");
	return (1);
}
