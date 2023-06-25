/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupinto <gupinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:02:49 by gupinto           #+#    #+#             */
/*   Updated: 2023/05/10 13:30:36 by gupinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **new_str, int i)
{
	while (--i < -1)
		free(new_str[i]);
	free(new_str);
}

static int	ft_counter(char const *s, char c)
{
	int	i;
	int	counter_str;

	i = 0;
	counter_str = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			counter_str++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter_str);
}

static char	**ft_cpy(char **new_str, char const *s, char c, int k)
{
	int	i;

	while (*s)
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] && s[i] != c)
			i++;
		if (new_str && *s)
		{
			new_str[k] = ft_substr(s, 0, i);
			if (!new_str[k])
			{
				ft_free(new_str, k);
				break ;
			}
			k++;
			s += i;
		}
	}
	return (new_str);
}

char	**ft_split(const char *s, char c)
{
	char	**new_str;
	size_t	i;

	if (!s)
		return (0);
	new_str = NULL;
	i = ft_counter(s, c);
	new_str = malloc(sizeof(char *) * (i + 1));
	if (!new_str)
		return (NULL);
	if (new_str)
	{
		new_str = ft_cpy(new_str, s, c, 0);
		if (new_str)
			*(new_str + i) = NULL;
	}
	return (new_str);
}
