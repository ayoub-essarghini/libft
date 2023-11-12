/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:18:02 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/12 23:55:30 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ttl;
	void	*buffer;

	ttl = nmemb * size;
	buffer = malloc(ttl);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, ttl);
	return (buffer);
}
