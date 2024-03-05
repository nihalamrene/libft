/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:22:27 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:12:19 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p; 
	int				i;

	p = (unsigned char *)b;
	i = 0;
	while (len)
	{
		p[i++] = (unsigned char)c;
		len--;
	}
	return (b);
}
