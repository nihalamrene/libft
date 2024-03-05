/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 00:40:44 by namrene           #+#    #+#             */
/*   Updated: 2023/11/09 21:49:39 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	size;
	int				i;

	size = ft_strlen(s);
	i = 0;
	if (len > size)
		len = size; 
	if (len > size - start)
		len = size - start;
	if (start > size)
		return (ft_strdup(""));
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	while (s[i + start] && len > 0)
	{
		p[i] = s[i + start];
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}
