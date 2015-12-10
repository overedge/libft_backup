/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:17:43 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:49:50 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char*)dest;
	s2 = (char*)src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (char)c)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
