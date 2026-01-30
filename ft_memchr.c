/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:12:24 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 12:09:34 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;
	size_t			i;

	i = 0;
	while (i < n)
	{
		cur = (unsigned char *)(s + i);
		if (*cur == (unsigned char)c)
			return ((void *)(cur));
		i++;
	}
	return (NULL);
}
