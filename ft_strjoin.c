/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:45 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 01:56:48 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	size_t		total_size;
	char	*result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_size = len1 + len2 + 1;
	result = malloc(total_size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, total_size);
	ft_strlcat(result, s2, total_size);
	return (result);
}
