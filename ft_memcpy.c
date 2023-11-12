/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:43:55 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 00:13:12 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{	
	unsigned int		i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	if ((dest == src) || n == 0)
		return (dest);
	id (!dest && !src)
		return (0);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < len)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dest);
}