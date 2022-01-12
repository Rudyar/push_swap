/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:59:24 by arudy             #+#    #+#             */
/*   Updated: 2022/01/12 10:17:46 by arudy            ###   ########.fr       */
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
	int				index;
}t_stack;

t_tab		*check_input(int ac, char **av);
t_tab		*init_tab(void);
t_stack		*create_lst(t_tab *tab);
t_stack		*ft_lst_last(t_stack *lst);
t_stack		*find_highest(t_stack **lst, int max);
t_stack		*find_smallest(t_stack **lst);
int			tab_size(char **tab);
int			tab_is_sorted(t_tab *tab);
int			*create_tab(long long *ll_tab, int size);
int			ft_putstr_error(char *s);
void		ft_free(char **strs);
void		free_lst(t_stack **lst);
void		print_lst(t_stack **a, t_stack **b);
void		sort_index_lst(t_stack **lst, int max);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **lst);
void		rb(t_stack **lst);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **lst);
void		rrb(t_stack **lst);
void		rrr(t_stack **a, t_stack **b);
void		sort_long_lst(t_stack **a, t_stack **b, int size);
void		sort_short_lst(t_stack **a, t_stack **b, int size);
void		sort_3_lst(t_stack **a, int size);
void		sort_radix(t_stack **a, t_stack **b, int size);
int			a_is_sorted(t_stack **a);
int			is_in_second_part(t_stack **lst, int index);
int			is_in_first_part(t_stack **lst, int start, int end);
int			ft_lst_size(t_stack **lst);
long long	*create_ll_tab(char **src);

#endif
