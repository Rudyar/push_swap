/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:44:45 by arudy             #+#    #+#             */
/*   Updated: 2022/01/11 16:08:33 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	convert_to_binary(int index)
{
	int	ret;

	ret = 0;
	if (index > 1)
		ret = convert_to_binary(index / 2);
	ret = ret * 10 + index % 2;
	return (ret);
}

void	make_binary_index(t_stack **a)
{
	while (*a)
	{
		(*a)->binary_index = convert_to_binary((*a)->index);
		a = &(*a)->next;
	}
}

int	get_index_length_binary(t_stack **lst)
{
	t_stack	*tmp;
	int		nbr;
	int		size;

	tmp = *lst;
	nbr = 0;
	size = 1;
	while (*lst)
	{
		if ((*lst)->index > (*tmp).index)
			tmp = *lst;
		lst = &(*lst)->next;
	}
	nbr = tmp->binary_index;
	while (nbr > 1)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

void	sort_radix(t_stack **a, t_stack **b)
{
	(void)b;
	int	i;

	i = 0;
	make_binary_index(a);
	i = get_index_length_binary(a);
	(void)i;
}
