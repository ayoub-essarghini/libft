/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:35:17 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/08 10:26:54 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trm_str;
	size_t	trm_len;
	size_t	str_len;

	start = 0;
	str_len = ft_strlen(s1);
	while (start < str_len && ft_strchr(set, s1[start]))
		start++;
	end = str_len - start;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trm_len = end - start + 1;
	trm_str = (char *)malloc(trm_len + 1);
	if (trm_str != NULL)
		ft_strncpy(trm_str, s1 + start, trm_len);
		trm_str[trm_len] = '\0';
	return (trm_str);
}
