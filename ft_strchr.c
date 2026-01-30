/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:26 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 12:15:28 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*cur;
	unsigned char	cchar;

	cur = (unsigned char *)s;
	cchar = (unsigned char)c;
	while (*cur != '\0')
	{
		if (*cur == cchar)
			return ((char *)cur);
		cur++;
	}
	if (cchar == '\0')
		return ((char *)cur);
	return (NULL);
}
