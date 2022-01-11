/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:51:34 by arudy             #+#    #+#             */
/*   Updated: 2022/01/11 15:25:37 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*ft_lst_new(int content, void *prev)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->prev = prev;
	new->next = NULL;
	new->index = -1;
	new->binary_index = 0;
	return (new);
}

void	ft_lst_add_back(t_stack **alst, t_stack *new)
{
	t_stack	*tmp;

	if (new)
	{
		if (*alst)
		{
			tmp = ft_lst_last(*alst);
			tmp->next = new;
		}
		else
			*alst = new;
	}
}

t_stack	*create_lst(t_tab *tab)
{
	t_stack	*lst;
	t_stack	*start;
	int		i;

	i = 1;
	lst = ft_lst_new(tab->tab[0], NULL);
	start = lst;
	while (i < tab->size)
	{
		if (i == 1)
			lst = ft_lst_new(tab->tab[i], lst);
		else
			lst = ft_lst_new(tab->tab[i], lst);
		ft_lst_add_back(&start, lst);
		i++;
	}
	sort_index_lst(&start, tab->size - 1);
	return (start);
}
