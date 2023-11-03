/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:43:13 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/30 20:09:30 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int is_trim(char const c, char const *trim)
{
	int	i;
	i = 0;
	while (trim[i])
	{
		if (trim[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_len_str(char const *str, char const *trim)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_trim(str[i],trim))
		{
			i++;
			continue;
		}
		i++;
		j++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*str_trim;
	int	size;

	size = get_len_str(s1,set) + 1;
	str_trim = (char *)malloc(size);
	if (!str_trim)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_trim(s1[i], set))
		{
			i++;
			continue;
		}
		str_trim[j] = s1[i];
		i++;
		j++;
	}
	return (str_trim);
}

#include<stdio.h>
int	main(void)
{
	char	*str = "AHMEDHZOUIHMK";
	char 	*trim = "AH";

	printf("%d",get_len_str(str,trim));
	printf("\n%s",ft_strtrim(str,trim));


	return (0);
}
