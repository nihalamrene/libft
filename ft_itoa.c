/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:04:51 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:09:21 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		i++;
	while (a)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

static char	*smiha(int n, int pl, char *p, int i)
{
	if (n == 0)
	{
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	i = pl - 1;
	while (n > 0)
	{
		p[i--] = n % 10 + '0';
		n = n / 10;
	}
	p[pl] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int		i;
	int		pl;
	char	*p;

	i = 0;
	pl = ft_length(n);
	p = (char *)malloc(pl + 1);
	if (p == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(p, "-2147483648", 12);
		return (p);
	}
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	return (smiha(n, pl, p, i));
}
