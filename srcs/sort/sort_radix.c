/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:44:45 by arudy             #+#    #+#             */
/*   Updated: 2022/01/12 10:55:01 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_radix(t_stack **a, t_stack **b, int size)
{
	int	max_bit;
	int	max_size;
	int	i;
	int	j;

	max_bit = 0;
	max_size = size -1;
	i = 0;
	while ((max_size >> max_bit) != 0)
		max_bit++;
	while (i < max_bit)
	{
		j = 0;
		while ((j < size))
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(b, a);
		i++;
	}
}
