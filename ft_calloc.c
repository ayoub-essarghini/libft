/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:18:02 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/20 14:22:18 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ttl;
	void	*buffer;

	if (nmemb && size > SIZE_MAX / nmemb)
	{
		return (NULL);
	}
	ttl = nmemb * size;
	buffer = malloc(ttl);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, ttl);
	return (buffer);
}
