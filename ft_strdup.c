/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:32 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 01:55:44 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ptr;
	size_t		length;

	length = ft_strlen(s);
	ptr = malloc(length + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, length + 1);
	return (ptr);
}
