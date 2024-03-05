/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namrene <namrene@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:39:19 by namrene           #+#    #+#             */
/*   Updated: 2023/11/11 16:09:59 by namrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		if (current->content)
			del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
