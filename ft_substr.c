/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:28:26 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/15 11:38:49 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	if (size <= start)
		return (ft_strdup(""));
	size = size - start;
	if (size >= len)
		size = len;
	copy = (char *)malloc(size + 1);
	if (!copy)
		return (NULL);
	while (size > i)
	{
		copy[i] = src[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}
