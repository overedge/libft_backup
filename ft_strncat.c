/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:51:06 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/11/29 02:40:28 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	str[1001];

	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			str[i] = src[i];
			i++;
		}
		str[i + 1] = '\0';
		ft_strcat(dest, str);
		return (dest);
	}
	else
		return (dest);
}
