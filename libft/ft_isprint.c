/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:10:38 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 01:05:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int i)
{
	if (i == 32)
		return (64);
	else if ((i >= 33 && i <= 47) || (i >= 58 && i <= 64)
		|| (i >= 91 && i <= 96) || (i >= 123 && i <= 126))
		return (16);
	else if (i >= 48 && i <= 57)
		return (4);
	else if (i >= 'A' && i <= 'Z')
		return (1);
	else if (i >= 'a' && i <= 'z')
		return (2);
	else
		return (0);
}