/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:56:13 by gbudau            #+#    #+#             */
/*   Updated: 2021/04/03 01:05:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*p2;

	if (new != NULL)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			p2 = ft_lstlast(*alst);
			p2->next = new;
		}
	}
}
