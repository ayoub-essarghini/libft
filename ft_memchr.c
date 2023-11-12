/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:21:59 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 00:07:47 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*ptr;
	unsigned char	c2;

	c2 = (unsigned char)c;
	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == c2)
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
