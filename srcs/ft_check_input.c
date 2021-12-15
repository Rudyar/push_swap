/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:31:53 by arudy             #+#    #+#             */
/*   Updated: 2021/12/15 12:13:34 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_first_check(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return(1);
	while (s && s[i])
	{
		if (ft_isdigit(s[i]) && s[i] != ' ' && s[i] != '+' && s[i] != '-')
			return (1);
		i++;
	}
	return (0);
}

char	**ft_strjoin_strs(char **s1, char **s2)
{
	// int		i;
	// int		j;
	int		total_len;
	char	**dst;

	// i = 0;
	// j = 0;
	dst = NULL;
	total_len = ft_tab_size(s1) + ft_tab_size(s2);
	printf("total len : %d\n", total_len);
	return (dst);
}

int	ft_check_input(int ac, char **av)
{
	int		i;
	char	**input_splited;

	i = 1;
	input_splited = NULL;
	while (i < ac)
	{
		if (ft_first_check(av[i]))
			return (1);
		input_splited = ft_strjoin_strs(input_splited, ft_split(av[i], ' '));
		i++;
	}
	return (0);
}
