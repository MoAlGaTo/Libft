/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 17:12:48 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 17:13:08 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char ct;
	char *t;

	t = NULL;
	ct = (char)c;
	while (*str)
	{
		if (*str == ct)
			t = (char*)str;
		str++;
	}
	if (*str == ct)
		return ((char*)str);
	else
		return (t);
}
