/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 00:02:02 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:15:57 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s);
	d = ft_strlen(dst);
	i = 0;
	if (d >= dstsize)
		return (dstsize + s);
	while (src[i] && (i + d) < dstsize - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
