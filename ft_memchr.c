/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 18:59:08 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 18:59:24 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *des;

	des = (unsigned char*)s;
	while (n > 0 && *des != (unsigned char)c)
	{
		des++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
		return (des);
}
