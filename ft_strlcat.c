/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:54 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 21:31:39 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	size_t	c;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	c = 0;
	if (!dst || size == 0)
		return (src_len);
	if (size <= dst_len)
		return (src_len + size);
	i = dst_len;
	while (src[c] && i < size - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
