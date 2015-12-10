/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:01:13 by nahmed-m          #+#    #+#             */
/*   Updated: 2015/11/24 14:49:51 by nahmed-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		index;
	char		*str2;

	index = 0;
	str2 = (char*)str;
	while (index < n)
	{
		str2[index] = (char)c;
		index++;
	}
	return (str2);
}
