/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:35:17 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 22:23:50 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*empty_string(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "", 1);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trm_str;
	size_t	str_len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	str_len = ft_strlen(s1);
	while (start < str_len && ft_strchr(set, s1[start]))
		start++;
	end = str_len - 1;
	if (start == ft_strlen(s1))
		return (empty_string());
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trm_str = (char *)malloc((end - start + 2) * sizeof(char));
	if (!trm_str)
		return (NULL);
	ft_strlcpy(trm_str, (s1 + start), (end - start + 2));
	return (trm_str);
}
