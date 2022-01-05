/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:02:46 by arudy             #+#    #+#             */
/*   Updated: 2022/01/05 17:50:28 by arudy            ###   ########.fr       */
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

void	print_lst(t_stack **a, t_stack **b)
{
	t_stack	**tmp;
	t_stack	**tmp2;

	tmp = a;
	tmp2 = b;
	printf("\n-----------------\n");
	printf("|    a   |    b   |\n");
	printf("-------------------\n");
	while (*tmp != NULL || *tmp2 != NULL)
	{
		if (*tmp)
		{
			printf("| %d (%d)", (*tmp)->content, (*tmp)->index);
			tmp = &(*tmp)->next;
		}
		else
			printf("|  ");
		printf(" | ");
		if (*tmp2)
		{
			printf("%d (%d) |", (*tmp2)->content, (*tmp2)->index);
			tmp2 = &(*tmp2)->next;
		}
		else
			printf("  |");
		printf("\n");
	}
	printf("---------\n\n");
}
