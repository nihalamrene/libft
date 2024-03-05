/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:32:37 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:13:54 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return ;
	if (fd < 0)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		ft_putchar_fd(s[count], fd);
		count++;
	}
}
