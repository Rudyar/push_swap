/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:31:53 by arudy             #+#    #+#             */
/*   Updated: 2021/12/15 11:10:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_first_check(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return(0);
	while (s && s[i])
	{
		if (!(ft_isdigit(s[i])) && s[i] != ' ' && s[i] != '+' && s[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_input(int ac, char **av)
{
	int	i;

	i = 1;
	// char	**input_splited;

	// input_splited = NULL;
	// input_splited = ft_split_input(av);
	while (i < ac)
	{
		if (!(ft_first_check(av[i])))
			return (0);
		i++;
	}
	return (1);
}
