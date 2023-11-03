/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:04:53 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 18:52:54 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const char *src, size_t n)
{
	char	*str_dest;
	char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	if (str_src < str_dest)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else
	{
		while (n--)
			*str_dest++ = *str_src++;
	}
	return (dest);
}
