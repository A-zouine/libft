/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:39:25 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 19:15:25 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (i);
}
