/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:44:45 by arudy             #+#    #+#             */
/*   Updated: 2022/01/11 18:23:36 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	*convert_to_binary(int index)
{
	int		i;
	char	*base;
	char	*dst;

	i = 8;
	base = "01";
	dst = malloc(sizeof(char) * 10);
	dst[9] = '\0';
	while (index > 1)
	{
		dst[i] = base[index % 2];
		index = index / 2;
		i--;
	}
	dst[i] = base[index % 2];
	i--;
	while (i >= 0)
	{
		dst[i] = '0';
		i--;
	}
	return (dst);
}

void	make_binary_index(t_stack **a)
{
	while (*a)
	{
		(*a)->binary_index = convert_to_binary((*a)->index);
		a = &(*a)->next;
	}
}

int	still_zero_in_a(t_stack **lst, int i)
{
	while (*lst)
	{
		if ((*lst)->binary_index[i] == '0')
			return (1);
		lst = &(*lst)->next;
	}
	return (0);
}

void	sort_radix(t_stack **a, t_stack **b)
{
	int	i;

	i = 8;
	make_binary_index(a);
	while (i >= 0)
	{
		while ((*a))
		{
			if (!still_zero_in_a(a, i))
				break ;
			else if ((*a)->binary_index[i] == '0')
			{
				pb(a, b);
			}
			// else if ((*a)->next->binary_index[i] == '0')
			// 	sa(a);
			else
				ra(a);
		}
		while (*b)
		{
			pa(b, a);
		}
	i--;
	}
}
