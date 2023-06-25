/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupinto <gupinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:01:33 by gupinto           #+#    #+#             */
/*   Updated: 2023/05/04 16:51:19 by gupinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!str1 && !str2)
		return (NULL);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	if (str1 > str2)
	{
		while (n-- > 0)
			s1[n] = s2[n];
	}
	else
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (str1);
}
