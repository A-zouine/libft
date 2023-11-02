/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:24:42 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/02 22:46:13 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char*	ft_strstr(char* str, char* to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while (str[i] && n--)
	{
		j = 0;
		while (str[i + j] == to_find[j] && n--)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			else
				j++;
		}
		i++;
	}
	return (0);

}

int	main(void)
{
	char *str = "AHMED";
	char *t_find = "Med";

	printf("%s",ft_strstr(str,t_find, 5));

	return (0);

}
