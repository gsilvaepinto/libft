/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupinto <gupinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:15:03 by gupinto           #+#    #+#             */
/*   Updated: 2023/05/02 12:23:05 by gupinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	res;

	s = (char *)src;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	res = 0;
	if (size > dest_len)
		res = dest_len + src_len;
	else
		res = src_len + size;
	while (s[i] && (dest_len + 1) < size)
	{
		dest[dest_len] = s[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (res);
}
