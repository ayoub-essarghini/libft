/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:58:48 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 15:54:59 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*src;

	if (!s)
		return (NULL);
	src = (char *)s;
	while (*src != c)
	{
		if (*src == '\0')
		{
			return (NULL);
		}
		src++;
	}
	return (src);
}
