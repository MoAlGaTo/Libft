/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:09:08 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 17:02:31 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (*s1 && *s2 && *s1 == *s2 && size)
	{
		s1++;
		s2++;
		size--;
	}
	if (0 == size)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
