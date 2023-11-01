/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:43:55 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/01 16:11:08 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t len)
{	
	size_t		i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) dest;
	while (i < len)
	{
		p[i++] = (unsigned char) *src;
		src++;
	}
	return (dest);
}
