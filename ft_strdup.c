/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:01:55 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 11:20:48 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int	len_str;
	int	i;
	char	*copy;

	len_str = 0;
	i = 0;
	while (str[len_str])
		len_str++;
	copy = (char *)malloc(len_str + 1);
	if (!copy)
		return (0);
	while (i < len_str)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len_str] = '\0';
	return (copy);
}

int	main(void)
{
	char *str = "Hello word";


	printf("%s",ft_strdup(str));

	return (0);
}

