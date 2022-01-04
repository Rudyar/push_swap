/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:02:46 by arudy             #+#    #+#             */
/*   Updated: 2022/01/04 21:56:15 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	print_both_lst(t_stack *a, t_stack *b)
// {
// 	printf("a  |  b\n");
// 	printf("-------\n");
// 	while (a != NULL && b != NULL)
// 	{
// 		printf("%d  |  %d\n", a->content, b->content);
// 		if (a->next != NULL)
// 			a = a->next;
// 		if (b->next != NULL)
// 			b = b->next;
// 		if (a->next == NULL || b->next == NULL)
// 			break ;
// 	}
// 	while (a != NULL)
// 	{
// 		printf("%d  |  \n", a->content);
// 		if (a->next == NULL)
// 			break ;
// 		a = a->next;
// 	}
// 	while (b != NULL)
// 	{
// 		printf("  |  %d\n", b->content);
// 		if (b->next == NULL)
// 			break ;
// 		b = b->next;
// 	}
// }

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

void	print_lst(t_stack **a, t_stack **b)
{
	t_stack	**tmp;
	t_stack	**tmp2;

	tmp = a;
	tmp2 = b;
	printf("\n---------\n");
	printf("| a | b |\n");
	printf("---------\n");
	while (*tmp != NULL || *tmp2 != NULL)
	{
		if (*tmp)
		{
			printf("| %d", (*tmp)->content);
			tmp = &(*tmp)->next;
		}
		else
			printf("|  ");
		printf(" | ");
		if (*tmp2)
		{
			printf("%d |", (*tmp2)->content);
			tmp2 = &(*tmp2)->next;
		}
		else
			printf("  |");
		printf("\n");
	}
	printf("---------\n\n");
}
