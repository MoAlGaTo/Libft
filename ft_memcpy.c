/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:18:51 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 19:19:24 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t length)
{
	char		*dest;
	const char	*str;
	int			c;

	c = 0;
	dest = dst;
	str = src;
	while (length)
	{
		dest[c] = str[c];
		c++;
		length--;
	}
	return (dest);
}
