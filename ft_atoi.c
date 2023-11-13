/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:05:32 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 16:01:03 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] && (str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' && str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res *= 10 + (str[i] - 48);
	i++;
	return (res * sign);
}
