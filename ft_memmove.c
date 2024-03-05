/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:16:24 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:11:55 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	i = 0;
	d = dst;
	s = src;
	if (d == s)
		return (dst);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
