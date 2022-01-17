/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:31:53 by arudy             #+#    #+#             */
/*   Updated: 2022/01/17 11:01:29 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**free_char_input(char **src)
{
	ft_free(src);
	return (NULL);
}

int	first_check(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (1);
	while (s && s[i])
	{
		if (ft_isdigit(s[i]) && s[i] != ' ' && s[i] != '+' && s[i] != '-')
			return (0);
		else if ((s[i] == '+' && ft_isdigit(s[i + 1]))
			|| (s[i] == '-' && ft_isdigit(s[i + 1])))
			return (0);
		else if (ft_strlen(s) >= 11)
			return (0);
		i++;
	}
	return (1);
}

char	**ft_strjoin_strs(char **s1, char **s2)
{
	int		i;
	int		j;
	int		total_len;
	char	**dst;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = NULL;
	total_len = tab_size(s1) + tab_size(s2);
	dst = malloc(sizeof(char *) * (total_len + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = ft_strdup(s1[i]);
		i++;
	}
	while (s2[j])
		dst[i++] = ft_strdup(s2[j++]);
	dst[i] = NULL;
	ft_free(s1);
	ft_free(s2);
	return (dst);
}

char	**split_input(int ac, char **av)
{
	int			i;
	char		**input_splited;

	i = 1;
	input_splited = malloc(sizeof(char *) * 1);
	if (!input_splited)
		return (NULL);
	input_splited[0] = NULL;
	while (i < ac)
	{
		if (!(first_check(av[i])))
			return (free_char_input(input_splited));
		input_splited = ft_strjoin_strs(input_splited, ft_split(av[i], ' '));
		i++;
	}
	return (input_splited);
}

t_tab	*check_input(int ac, char **av)
{
	char		**input_splited;
	long long	*ll_tab;
	t_tab		*tab;

	input_splited = split_input(ac, av);
	if (!input_splited)
		return (0);
	tab = init_tab();
	if (!tab)
		return (0);
	tab->size = tab_size(input_splited);
	ll_tab = create_ll_tab(input_splited);
	if (!ll_tab)
	{
		ft_free(input_splited);
		free(tab);
		return (0);
	}
	ft_free(input_splited);
	tab->tab = create_tab(ll_tab, tab->size);
	if (!tab->tab)
		return (free_tab_tab(tab, ll_tab));
	return (tab);
}
