/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fportela <fportela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:10:46 by fportela          #+#    #+#             */
/*   Updated: 2021/04/04 23:16:07 by fportela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_line(char **s, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_substr(*s, 0, len);
		tmp = ft_strdup(&((*s)[len + 1]));
		free(*s);
		*s = tmp;
	}
	else
	{
		*line = ft_substr(*s, 0, len);
		free(*s);
		*s = NULL;
		return (0);
	}
	return (1);
}

static int	checkline(char **s, char **line, int fd_read)
{
	if (fd_read < 0)
		return (-1);
	else if ((fd_read == 0 && *s == NULL) || *s[0] == '\0')
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (get_line(s, line));
}

int	get_next_line(int fd, char **line)
{
	int			fd_read;
	static char	*s;
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;

	if (fd < 0 || !line || !BUFFER_SIZE)
		return (-1);
	fd_read = read(fd, buff, BUFFER_SIZE);
	while (fd_read > 0)
	{
		buff[fd_read] = '\0';
		if (s == NULL)
			s = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(s, buff);
			free(s);
			s = tmp;
		}
		if (ft_strchr(s, '\n'))
			break ;
		fd_read = read(fd, buff, BUFFER_SIZE);
	}
	return (checkline(&s, line, fd_read));
}
