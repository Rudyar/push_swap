/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:51:34 by arudy             #+#    #+#             */
/*   Updated: 2021/12/27 20:06:32 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*init_lst(void)
{
	t_stack	*lst;

	lst = malloc(sizeof(lst));
	if (!lst)
		return (0);
	lst->content = 0;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

t_stack	*ft_lst_new(int	content, void *prev)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->prev = prev;
	new->next = NULL;
	return (new);
}

void	ft_lst_add_front(t_stack **alst, t_stack *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}

t_stack	*create_lst(t_tab *tab)
{
	t_stack	*lst;
	t_stack	*tmp;
	t_stack	*start;
	int		i;

	i = tab->size - 1;
	lst = init_lst();
	tmp = init_lst();
	while (i >= 0)
	{
		lst = ft_lst_new(tab->tab[i], tmp);
		ft_lst_add_front(&start, lst);
		tmp->next = lst;
		if (i == 0)
			tmp->next = NULL;
		i--;
	}
	return (start);
}
