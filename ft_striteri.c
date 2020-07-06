/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 18:42:20 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 18:42:32 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int c;

	c = 0;
	if (s != NULL && f != NULL)
	{
		while (s[c])
		{
			(f)(c, &s[c]);
			c++;
		}
	}
}