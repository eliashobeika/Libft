/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:06:44 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 01:57:24 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	int			result;
	size_t			little_len;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	result = 1;
	little_len = ft_strlen(little);
	while (i + little_len <= len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			result = ft_strncmp(big + i, little, little_len);
			if (result == 0)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
