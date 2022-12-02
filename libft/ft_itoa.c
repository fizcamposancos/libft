/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:46:22 by marvin            #+#    #+#             */
/*   Updated: 2021/04/03 01:05:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		len = len + 1;
	}
	return (len + 1);
}

static char	*str_val(unsigned int nb, unsigned int len, int n, char *str)
{
	while (nb > 0)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	nb;
	char			*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		nb = -n;
		len = nb_len(nb) + 1;
	}
	else
	{
		nb = n;
		len = nb_len(nb);
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	return (str_val(nb, len, n, str));
}
