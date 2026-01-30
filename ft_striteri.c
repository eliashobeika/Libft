/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliashobeika <eliashobeika@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:15:40 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/26 01:56:13 by eliashobeik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t		len;
	size_t		i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f((unsigned int)i, s + i);
		i++;
	}
}
