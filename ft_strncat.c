/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:51:06 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/12/10 11:44:14 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*cur;

	cur = dest;
	while (*cur != '\0')
		cur++;
	while (*src != '\0' && n > 0)
	{
		*cur = *src;
		cur++;
		src++;
		n--;
	}
	*cur = '\0';
	return (dest);
}
