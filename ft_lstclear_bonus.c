/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:28:45 by eliashobeik       #+#    #+#             */
/*   Updated: 2025/11/26 01:21:23 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;
	t_list	*cur;

	if (lst == NULL || del == NULL)
		return ;
	prev = NULL;
	cur = *lst;
	while (cur != NULL)
	{
		prev = cur;
		cur = cur -> next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
