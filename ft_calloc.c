/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 23:42:54 by marvin            #+#    #+#             */
/*   Updated: 2021/04/03 00:45:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*str;

	str = malloc(nelem * (elsize));
	if (!str)
		return (NULL);
	ft_memset(str, 0, nelem * (elsize));
	return (str);
}
