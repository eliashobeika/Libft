/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:16:15 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 01:51:05 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_check_front(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && ft_is_in_set(s1[i], set) == 1)
		i++;
	return (i);
}

static int	ft_check_back(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (i >= 0 && ft_is_in_set(s1[i], set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	char	*result;

	front = ft_check_front(s1, set);
	back = ft_check_back(s1, set);
	if (front > back)
	{
		result = malloc(1 * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	return (ft_substr(s1, front, back - front + 1));
}
