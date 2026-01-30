/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:33:10 by eliashobeik       #+#    #+#             */
/*   Updated: 2025/11/26 01:22:04 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*prev;
	t_list	*cur;

	if (lst == NULL || f == NULL)
		return ;
	prev = NULL;
	cur = lst;
	while (cur != NULL)
	{
		prev = cur;
		cur = cur -> next;
		f(prev -> content);
	}
}
