/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:31:40 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 21:08:17 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] == chr)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *)&str[j]);
	else
		return (NULL);
}
