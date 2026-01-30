/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:52:26 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 12:09:54 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = (unsigned char *)s;
	v = (unsigned char)c;
	i = 0;
	while (i < n)
		p[i++] = v;
	return (s);
}
