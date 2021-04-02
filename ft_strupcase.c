/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:10:38 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 00:33:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	str = temp;
	return (str);
}
