/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:32:15 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 01:00:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	*revtab;
	int	i;

	revtab = (int *)malloc(sizeof(int) * size);
	if (!revtab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		revtab[i] = *(tab + size - 1 - i);
		i++;
	}
	i = 0;
	while (i < size)
	{
		*(tab + i) = revtab[i];
		i++;
	}
}
