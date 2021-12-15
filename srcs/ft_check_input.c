/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:31:53 by arudy             #+#    #+#             */
/*   Updated: 2021/12/15 15:13:49 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_first_check(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (1);
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
	int		i;
	int		j;
	int		total_len;
	char	**dst;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dst = NULL;
	total_len = ft_tab_size(s1) + ft_tab_size(s2);
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

int	ft_check_input(int ac, char **av)
{
	int		i;
	char	**input_splited;

	i = 1;
	input_splited = malloc(sizeof(char *) * 1);
	if (!input_splited)
		return (1);
	input_splited[0] = NULL;
	while (i < ac)
	{
		if (ft_first_check(av[i]))
			return (1);
		input_splited = ft_strjoin_strs(input_splited, ft_split(av[i], ' '));
		i++;
	}
	i = 0;
	while (input_splited[i] != NULL)
	{
		printf("%s\n", input_splited[i]);
		i++;
	}
	// ft_free(input_splited);
	return (0);
}
