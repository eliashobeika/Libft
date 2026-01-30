/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:40:51 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 12:09:26 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*tmp;
	unsigned char	cchar;
	unsigned char	*cur;

	cchar = (unsigned char)c;
	cur = (unsigned char *)s;
	tmp = NULL;
	while (*cur != '\0')
	{
		if (*cur == cchar)
			tmp = (char *)cur;
		cur++;
	}
	if (cchar == '\0')
		return ((char *)cur);
	return (tmp);
}
