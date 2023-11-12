/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:52:03 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/11/12 19:14:15 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	count_digit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			d_size;
	int			i;
	char		*res;
	long int	num;

	num = n;
	d_size = count_digit(n);
	if (n < 0)
	{
		num *= -1;
		d_size++;
	}
	res = (char *) malloc ((d_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	*(res + d_size) = 0;
	while (d_size--)
	{
		*(res + d_size) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
