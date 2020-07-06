/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 18:58:25 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 18:58:41 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *dt;
	char *str;

	dt = dest;
	str = (char*)src;
	while (n)
	{
		(*dt++) = (*str);
		if ((*str++) == (char)c)
			return (dt);
		n--;
	}
	return (NULL);
}
