/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehobeika <ehobeika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:29:07 by ehobeika          #+#    #+#             */
/*   Updated: 2025/11/25 11:48:50 by ehobeika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (sign == 1)
		return (-num);
	return (num);
}
