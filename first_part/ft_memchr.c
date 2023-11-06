/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:21:59 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/03 21:40:55 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;
	unsigned char	c2;

	c2 = (unsigned char)c;
	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i] != '\0' && i < n)
	{
		if (ptr[i] == c2)
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
