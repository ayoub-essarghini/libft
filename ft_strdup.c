/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:41:18 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/13 15:16:26 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		str_len;
	int		i;

	i = 0;
	str_len = ft_strlen(s);
	d = (char *) malloc((str_len * sizeof(char)) + 1);
	if (!d)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
