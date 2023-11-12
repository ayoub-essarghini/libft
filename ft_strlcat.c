/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:37:54 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 00:25:11 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	char	*s;
	size_t	res;

	s = (char *)src;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	res = 0;
	if (size > dst_len)
		res = src_len + dst_len;
	else
		res = src_len + size;
	while (s[i] && (dst_len + 1) < size)
	{
		dst[dst_len] = s[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (res);
}
