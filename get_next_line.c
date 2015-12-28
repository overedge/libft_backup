/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/27 16:20:44 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/28 15:58:41 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

static int		get_line(int const fd, char *buffer, char *save[fd])
{
	int			r;
	char		*c;
	char		*tmp;

	while ((c = ft_strchr(save[fd], '\n')) == NULL &&
	(r = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[r] = '\0';
		tmp = save[fd];
		save[fd] = ft_strjoin(tmp, buffer);
		ft_strdel(&tmp);
	}
	ft_strdel(&buffer);
	if (r == -1)
		return (-1);
	if (!c && r == 0)
		return (0);
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static char	*save[MAX_FD];
	char		*buffer;
	int			i;
	char		*tmp;

	buffer = ft_strnew(BUFF_SIZE);
	if (fd < 0 || line == NULL || buffer == NULL || BUFF_SIZE < 1)
		return (-1);
	if (save[fd] == NULL)
		save[fd] = ft_strnew(1);
	i = get_line(fd, buffer, &*save);
	if (i == -1)
		return (-1);
	if (i == 0)
	{
		*line = save[fd];
		save[fd] = NULL;
		return (0);
	}
	*line = ft_strsub(save[fd], 0, ft_strchr(save[fd], '\n') - save[fd]);
	tmp = save[fd];
	save[fd] = ft_strdup(ft_strchr(tmp, '\n') + 1);
	ft_strdel(&tmp);
	return (1);
}
