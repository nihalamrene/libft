/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:54:47 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:15:51 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		k;
	int		kk;
	char	*p;

	k = ft_strlen(s1);
	kk = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (k + kk + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, (k + kk + 1));
	ft_strlcat(p, s2, (k + kk + 1));
	return (p);
}
