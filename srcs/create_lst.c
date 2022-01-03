/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:51:34 by arudy             #+#    #+#             */
/*   Updated: 2022/01/03 11:59:38 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_lst(t_stack *alst)
{
	while (alst->next != NULL)
	{
		ft_putnbr_fd(alst->content, 1);
		ft_putchar_fd('\n', 1);
		if (alst->next != NULL)
			alst = alst->next;
		else
			break ;
	}
}

t_stack	*ft_lst_new(int content, void *prev)
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

t_stack	*ft_lst_last(t_stack *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	t_stack	*tmp;
	t_stack	*start;
	int		i;

	i = 1;
	lst = ft_lst_new(tab->tab[0], NULL);
	start = lst;
	tmp = NULL;
	while (i <= tab->size)
	{
		if (i == 1)
			lst = ft_lst_new(tab->tab[i], lst);
		else
			lst = ft_lst_new(tab->tab[i], tmp);
		ft_lst_add_back(&start, lst);
		tmp = lst->next;
		i++;
	}
	return (start);
}
