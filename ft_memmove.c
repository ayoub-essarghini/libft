/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:08:31 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/16 14:33:50 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len )
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (d < s)
	{
		ft_memcpy(d, s, len);
	}
	if (d >= s)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
