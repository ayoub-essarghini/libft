/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:18:02 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/20 18:42:45 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ttl;
	void	*buffer;

	if (size && (nmemb > (SIZE_MAX / size)))
		return (NULL);
	ttl = nmemb * size;
	buffer = malloc(ttl);
	if (buffer == NULL)
		return (NULL);
	ft_bzero(buffer, ttl);
	return (buffer);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main() {
	//char str[] = "abcd";
	printf("%s\n",ft_calloc(4 ,(size_t) (-4)));
	//printf("%s\n", ft_calloc(INT_MAX, INT_MAX));
}*/
