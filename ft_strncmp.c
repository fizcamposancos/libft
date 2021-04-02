/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportela <fportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:45:02 by fportela          #+#    #+#             */
/*   Updated: 2019/11/17 12:57:59 by fportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}
