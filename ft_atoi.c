/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:18:36 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 13:20:51 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(const char *str, int i, int signe, long resultat)
{
	long	tmp;

	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = resultat;
		resultat = resultat * 10 +(str[i] - '0');
		if (tmp != resultat / 10 && signe == -1)
			return (0);
		else if (tmp != resultat / 10 && signe == 1)
			return (-1);
		i++;
	}
	return (resultat);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	resultat = test(str, i, signe, resultat);
	return ((int)resultat * signe);
}
