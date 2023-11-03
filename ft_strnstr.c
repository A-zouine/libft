/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:24:42 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 21:32:01 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to_find || !str)
		return (0);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (j + i) < n)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
