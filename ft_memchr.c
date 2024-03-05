/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:55:38 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:11:07 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cr;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	cr = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == cr)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
