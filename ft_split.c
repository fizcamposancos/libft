/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:42:29 by fportela          #+#    #+#             */
/*   Updated: 2021/04/03 01:12:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char c, char charset)
{
	if (charset == c)
		return (1);
	return (0);
}

static int	count_str(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && isinset(*str, c))
			str++;
		if (*str && !isinset(*str, c))
		{
			count++;
			while (*str && !isinset(*str, c))
				str++;
		}
	}
	return (count);
}

static char	*malloc_word(char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !isinset(str[i], c))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !isinset(str[i], c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_split(char ***tabstr)
{
	int	i;

	i = 0;
	while (*tabstr[i])
	{
		free(*tabstr[i]);
		i++;
	}
	free(*tabstr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**tabstr;
	int		i;

	if (!s)
		return (NULL);
	len = count_str(s, c);
	tabstr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!tabstr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && isinset(*s, c))
			s++;
		if (*s && !isinset(*s, c))
		{
			tabstr[i] = malloc_word((char *)s, c);
			if (!tabstr[i])
				return (free_split(&tabstr));
			i++;
			while (*s && !isinset(*s, c))
				s++;
		}
	}
	tabstr[i] = NULL;
	return (tabstr);
}
