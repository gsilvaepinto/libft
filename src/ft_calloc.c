/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupinto <gupinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:02:01 by gupinto           #+#    #+#             */
/*   Updated: 2023/05/02 15:27:12 by gupinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*tmp;

	tmp = malloc(num * size);
	if (tmp != NULL)
		ft_memset(tmp, '\0', num * size);
	return (tmp);
}
