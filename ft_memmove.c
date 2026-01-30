/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:14:46 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 12:14:49 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstp;
	unsigned char	*srcp;

	dstp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			dstp[i] = srcp[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dstp[i] = srcp[i];
		}
	}
	return (dst);
}
