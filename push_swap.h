/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:59:24 by arudy             #+#    #+#             */
/*   Updated: 2021/12/16 21:04:06 by arudy            ###   ########.fr       */
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

t_tab		*check_input(int ac, char **av);
t_tab		*init_tab(void);
int			tab_size(char **tab);
int			*create_tab(long long *ll_tab, int size);
void		ft_free(char **strs);
long long	*create_ll_tab(char **src);

#endif
