/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:20 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 02:00:20 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_under2(char const *s, char c)
{
	char	**result;

	if (ft_strlen(s) == 0 || *s == c)
	{
		result = malloc(1 * sizeof(char *));
		result[0] = NULL;
	}
	else
	{
		result = malloc(2 * sizeof(char *));
		result[0] = malloc(2 * sizeof(char));
		ft_strlcpy(result[0], s, 2);
		result[1] = NULL;
	}
	return (result);
}

static int	ft_countwords(char const *s, char c)
{
	int		flag;
	int		count;
	char	prev;

	flag = 0;
	prev = *(s++);
	if (prev != c)
		flag = 1;
	count = 0;
	while (*s != '\0')
	{
		if (*s == c && prev != c)
		{
			if (flag == 1)
				count++;
			flag = 0;
		}
		else if (*s != c && prev == c)
			flag = 1;
		prev = *(s++);
	}
	if (prev != c)
		count++;
	return (count);
}

static int	ft_getwordlength(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		count++;
	}
	return (count);
}

static const char	*ft_fill_word(char **arr, char const *s, int index, char c)
{
	size_t		len;
	char		*temp;

	len = ft_getwordlength(s, c);
	arr[index] = malloc((len + 1) * sizeof(char));
	temp = arr[index];
	while (*s != c && *s != '\0')
	{
		*temp = *s;
		temp++;
		s++;
	}
	*temp = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;

	if (ft_strlen(s) < 2)
		return (ft_under2(s, c));
	result = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	index = 0;
	while (*s != '\0')
	{
		if (*s != c)
			s = ft_fill_word(result, s, index++, c);
		else
			s++;
	}
	result[index] = NULL;
	return (result);
}
