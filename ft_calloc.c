/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:53:06 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 12:19:23 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count && size && count > (SIZE_MAX / size))
		return (NULL);
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	s_zero(memory, count * size);
	return (memory);
}
