/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:02:46 by arudy             #+#    #+#             */
/*   Updated: 2022/01/03 15:30:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_lst(t_stack *alst)
{
	while (alst->next != NULL)
	{
		ft_putnbr_fd(alst->content, 1);
		if (alst->next != NULL)
			alst = alst->next;
		else
			break ;
	}
}

void	print_both_lst(t_stack *a, t_stack *b)
{
	printf("a  |  b\n");
	printf("-------\n");
	while (a->next != NULL && b->next != NULL)
	{
		printf("%d  |  %d\n", a->content, b->content);
		a = a->next;
		b = b->next;
	}
	// while (a->next != NULL)
	// {
	// 	printf("%d  |  \n", a->content);
	// 	a = a->next;
	// }
	// while (b->next != NULL)
	// {
	// 	printf("  |  %d\n", b->content);
	// 	b = b->next;
	// }
}
