/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:31:53 by arudy             #+#    #+#             */
/*   Updated: 2022/01/18 10:00:12 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	check_sign(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != NULL)
	{
		j = 0;
		if (ft_strlen(s[i]) > 11)
			return (0);
		if (s[i][j] == '\0')
			return (0);
		if (s[i][j] == '+' || s[i][j] == '-')
			j++;
		if (ft_isdigit(s[i][j]) != 0)
			return (0);
		while (ft_isdigit(s[i][j]) == 0)
			j++;
		if (s[i][j] != '\0')
			return (0);
		i++;
	}
	return (1);
}

int	first_check(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]) != 0 && s[i] != ' ' && s[i] != '+' && s[i] != '-')
			return (0);
		else if (s[i] == '+' && ft_isdigit(s[i + 1]) != 0)
			return (0);
		else if (s[i] == '-' && ft_isdigit(s[i + 1]) != 0)
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
	while (i < ac)
	{
		if (first_check(av[i]) == 0)
			return (NULL);
		i++;
	}
	input_splited = malloc(sizeof(char *) * 1);
	if (!input_splited)
		return (NULL);
	input_splited[0] = NULL;
	i = 1;
	while (i < ac)
	{
		input_splited = ft_strjoin_strs(input_splited, ft_split(av[i], ' '));
		i++;
	}
	if (!check_sign(input_splited))
		return (ft_free_input(input_splited));
	return (input_splited);
}

t_tab	*check_input(int ac, char **av)
{
	char		**input_splited;
	t_tab		*tab;

	input_splited = split_input(ac, av);
	if (!input_splited)
		return (0);
	tab = init_tab();
	if (!tab)
		return (0);
	tab->size = tab_size(input_splited);
	tab->tab = create_tab(input_splited, tab->size);
	ft_free(input_splited);
	if (!tab->tab)
	{
		free(tab->tab);
		free(tab);
		return (0);
	}
	return (tab);
}
