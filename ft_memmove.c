/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:04:53 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 20:04:48 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*str_dest;
	char		*str_src;
	size_t		i;

	i = 0;
	if ((!dest && !src) || (src == dest))
		return (dest);
	str_dest = (char *)dest;
	str_src = (char *)src;
	if (str_src < str_dest)
	{
		while (len-- > i)
			str_dest[len] = str_src[len];
	}
	else
	{
		while (len > i)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	return (dest);
}
