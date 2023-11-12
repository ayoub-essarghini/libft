/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:38:52 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 00:33:39 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;
	char	*bg;
	char	*sub_str;

	sub_str = (char *) little;
	bg = (char *) big;
	little_len = ft_strlen(sub_str);
	i = 0;
	if (little_len == 0 || big == little)
		return (bg);
	while (bg[i] != '\0' && i < len)
	{
		j = 0;
		while (bg[i + j] != '\0' && sub_str[j] != '\0'
			&& bg[i + j] == sub_str[j] && i + j < len)
			j++;
		if (little_len == j)
			return (bg + i);
	i++;
	}
	return (0);
}
