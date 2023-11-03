/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:03:27 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 16:21:56 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*str_dest;
	char	*str_src;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	while (n--)
		*str_dest++ = *str_src++;
	return (dest);
}
