/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgadacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:24:46 by mgadacha          #+#    #+#             */
/*   Updated: 2019/01/08 19:25:02 by mgadacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int c;
	int d;

	d = 0;
	c = 0;
	if (s == NULL)
		return ;
	while (s[c])
		c++;
	while (c)
	{
		s[d] = '\0';
		d++;
		c--;
	}
}
