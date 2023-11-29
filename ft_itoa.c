/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:48:50 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 21:43:56 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	len_word(long long nb)
{
	long	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int b)
{
	long		size;
	char		*str;
	long long	n;

	n = b;
	size = len_word(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{	
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (n > 0)
	{
		str[size--] = ((n % 10) + '0');
		n /= 10;
	}
	return (str);
}
