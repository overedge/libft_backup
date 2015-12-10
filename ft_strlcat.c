/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:55:21 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/11/30 00:26:45 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			dsize;
	const char		*source;
	char			*destination;

	i = size;
	source = src;
	destination = dst;
	while (i-- != 0 && *destination != '\0')
		destination++;
	dsize = destination - dst;
	i = size - dsize;
	if (i == 0)
		return (dsize + ft_strlen(source));
	while (*source)
	{
		if (i != 1)
		{
			*destination++ = *source;
			i--;
		}
		source++;
	}
	*destination = '\0';
	return (dsize + (source - src));
}
