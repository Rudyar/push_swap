/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:58:59 by arudy             #+#    #+#             */
/*   Updated: 2021/12/15 15:42:48 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	if (!(check_input(ac, av)))
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	ft_putstr_fd("Input Ok\n", 1);
	return (0);
}
