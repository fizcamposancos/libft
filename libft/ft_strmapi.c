/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportela <fportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:00:41 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 01:03:21 by fportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_str;
	unsigned int	i;
	int				len;

	if (s && f)
	{
		i = 0;
		len = ft_strlen((char *)s);
		f_str = (char *)malloc(len + 1);
		if (!f_str)
			return (NULL);
		while (s[i] != 0)
		{
			f_str[i] = f(i, s[i]);
			i++;
		}
		f_str[i] = 0;
		return (f_str);
	}
	return (NULL);
}
