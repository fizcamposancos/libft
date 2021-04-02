/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportela <fportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:08:39 by fportela          #+#    #+#             */
/*   Updated: 2019/11/14 14:28:31 by fportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*srcc;
	char	*destc;
	int		i;

	destc = (char *)dest;
	srcc = (char *)src;
	i = 0;
	while (i < (int)n)
	{
		destc[i] = srcc[i];
		if (srcc[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
