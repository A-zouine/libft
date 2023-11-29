/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:07:25 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 10:55:39 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	j;
	size_t	len_src;

	len_dest = 0;
	len_src = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest >= size)
	{
		return (len_src + size);
	}
	j = 0;
	while (j < size - len_dest - 1 && src[j])
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_dest + len_src);
}
