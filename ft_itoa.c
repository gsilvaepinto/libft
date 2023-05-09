/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupinto <gupinto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:57:32 by gupinto           #+#    #+#             */
/*   Updated: 2023/05/09 13:12:00 by gupinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_aux(char *str, int *numdig, int counter, int n)
{
	*numdig = counter;
	if (n > 9 || n < -9)
		str = ft_itoa_aux(str, numdig, counter + 1, n / 10);
	if (!str)
	{
		str = malloc(sizeof(char) * (counter + 1 + (n < 0)));
		if (!str)
			return (NULL);
		ft_memset(str, 0, counter + 1 + (n < 0));
		if (n < 0)
			str[0] = '-';
	}
	if (n >= 0)
		str[*numdig - counter + (n < 0)] = (n % 10) + '0';
	else
		str[*numdig - counter + (n < 0)] = -(n % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa_aux(NULL, &i, 1, n);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	return (str);
}
