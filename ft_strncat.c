/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:38:19 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 16:56:57 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
		c++;
	while (n && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
		n--;
	}
	dest[c + i] = '\0';
	return (dest);
}
