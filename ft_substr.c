/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:00:00 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 15:40:33 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	size_t	origin_len;
	size_t	substr_len;
	char	*sub;

	origin_len = ft_strlen(s);
	if (start >= origin_len)
		return (NULL);
	if (start + len >= origin_len)
		substr_len = origin_len - len;
	else
		substr_len = len;
	sub = (char *)malloc((substr_len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strncpy(sub, s + start, substr_len);
	sub[substr_len] = '\0';
	return (sub);
}
