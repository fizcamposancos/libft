/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 20:25:10 by gbudau            #+#    #+#             */
/*   Updated: 2021/04/03 01:07:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*trav;

	trav = lst;
	if (trav == NULL)
		return (trav);
	while (trav->next != NULL)
		trav = trav->next;
	return (trav);
}
