/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:40:50 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/07 12:30:36 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dst;
	size_t	src1_len;
	size_t	ttl_size;

	ttl_size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	src1_len = ft_strlen(s1);
	dst = (char *) malloc((ttl_size + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		dst[src1_len + i] = s2[i];
		i++;
	}
	dst[src1_len + i] = '\0';
	return (dst);
}
