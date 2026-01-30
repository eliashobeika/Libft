/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:16:22 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 17:15:01 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		sub_length;

	if (ft_strlen(s) < start)
	{
		result = malloc(1 * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	sub_length = ft_strlen(s + start);
	if (sub_length > len)
		sub_length = len;
	result = malloc(sub_length + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, sub_length + 1);
	return (result);
}
