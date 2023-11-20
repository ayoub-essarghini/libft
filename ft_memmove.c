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

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	if (dest > src)
	{
		while (len - i > 0)
		{
			((char *)dest)[len - 1 - i] = ((char *)src)[len -1 - i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
			len--;
		}
	}
	return (dest);
}
