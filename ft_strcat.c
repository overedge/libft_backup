/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:48:16 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/11/27 01:40:26 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		k;
	int		i;

	k = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[i + k] = src[i];
		i++;
	}
	dest[i + k] = '\0';
	return (dest);
}
