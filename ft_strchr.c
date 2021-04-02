/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:45:02 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 01:02:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	temp = (char *)s;
	while (*temp != '\0')
	{
		if (*temp == (char)c)
			return (temp);
		temp++;
	}
	if (*temp == '\0' && c == '\0')
		return (temp);
	return (NULL);
}
