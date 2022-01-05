/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:59:24 by arudy             #+#    #+#             */
/*   Updated: 2022/01/05 15:27:18 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_tab
{
	int	*tab;
	int	size;
}t_tab;

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
}t_stack;

t_tab		*check_input(int ac, char **av);
t_tab		*init_tab(void);
t_stack		*create_lst(t_tab *tab);
t_stack		*ft_lst_last(t_stack *lst);
int			tab_size(char **tab);
int			tab_is_sorted(t_tab *tab);
int			*create_tab(long long *ll_tab, int size);
int			ft_putstr_error(char *s);
void		ft_free(char **strs);
void		free_lst(t_stack **lst);
void		print_lst(t_stack **a, t_stack **b);
void		sa(t_stack *a);
void		sb(t_stack *b);
void		ss(t_stack *a, t_stack *b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **lst);
void		rb(t_stack **lst);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **lst);
void		rrb(t_stack **lst);
void		rrr(t_stack **a, t_stack **b);
long long	*create_ll_tab(char **src);

#endif
