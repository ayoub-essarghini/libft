/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:38:52 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/20 15:59:33 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (big[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		k = i;
		j = 0;
		while (little[j] != '\0' && big[k] != '\0'
			&& big[k] == little[j] && k < len)
		{
			j++;
			k++;
		}
		if (little[j] == '\0')
			return (&(((char *)big)[i]));
		i++;
	}
	return (NULL);
}
