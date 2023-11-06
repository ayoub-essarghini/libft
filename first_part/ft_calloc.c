/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:18:02 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/06 12:27:47 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	while (i < len)
		src[i++] = (unsigned char)c;
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	ttl;
	void	*buffer;

	ttl = nmemb * size;
	buffer = malloc(ttl);
	if (buffer == NULL)
		return (NULL);
	ft_memset(buffer, 0, ttl);
	return (buffer);
}
