/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:31:40 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 11:14:56 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*res;

	res = NULL;
	while (*str)
	{
		if (*str == (char)c)
			res = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)res);
}
