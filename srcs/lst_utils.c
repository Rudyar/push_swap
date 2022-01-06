/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:02:46 by arudy             #+#    #+#             */
/*   Updated: 2022/01/06 14:53:48 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_lst(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

t_stack	*ft_lst_last(t_stack *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_stack	*find_highest(t_stack **lst, int max)
{
	t_stack	*tmp;
	t_stack	*first;
	int		highest;

	highest = (*lst)->content;
	tmp = *lst;
	first = *lst;
	while (*lst)
	{
		if ((*lst)->content > highest)
		{
			highest = (*lst)->content;
			tmp = *lst;
		}
		*lst = (*lst)->next;
	}
	tmp->index = max;
	*lst = first;
	return (tmp);
}

t_stack	*find_smallest(t_stack **lst)
{
	t_stack	*tmp;
	t_stack	*first;
	int		smallest;

	smallest = (*lst)->content;
	tmp = *lst;
	first = *lst;
	while (*lst)
	{
		if ((*lst)->content < smallest)
		{
			smallest = (*lst)->content;
			tmp = *lst;
		}
		*lst = (*lst)->next;
	}
	tmp->index = 0;
	*lst = first;
	return (tmp);
}

void	print_lst(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	**a;
	t_stack	**b;

	a = stack_a;
	b = stack_b;
	printf("\n-------------------\n");
	printf("|    a   |    b   |\n");
	printf("-------------------\n");
	while (*a != NULL || *b != NULL)
	{
		if (*a)
		{
			printf("| %d (%d)", (*a)->content, (*a)->index);
			a = &(*a)->next;
		}
		else
			printf("|  ");
		printf(" | ");
		if (*b)
		{
			printf("%d (%d) |", (*b)->content, (*b)->index);
			b = &(*b)->next;
		}
		else
			printf("  |");
		printf("\n");
	}
	printf("-------------------\n\n");
}
