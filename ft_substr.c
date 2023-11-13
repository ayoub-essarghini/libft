/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:00:00 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 22:11:44 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	char	*sub;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
	}
	else
	{
		substr_len = ft_strlen(s + start);
		if (!(substr_len < len))
			substr_len = len;
		sub = (char *)malloc((substr_len + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		sub[substr_len] = 0;
		while (substr_len-- > 0)
			sub[substr_len] = s[start + substr_len];
	}
	return (sub);
}
