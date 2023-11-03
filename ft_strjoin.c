/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:10:49 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/30 18:40:55 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int     ft_get_len_string(char const *str)
{
        int     i;

        i = 0;
        while (*str)
        {
                i++;
                str++;
        }
        return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	size;
	int	i;
	int	j;
	char	*strjoin;

	size = (ft_get_len_string(s1) + ft_get_len_string(s2)) + 1;
	strjoin = (char *)malloc(size);
	if (!strjoin)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		strjoin[i] = s2[j];

		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
#include<stdio.h>
int	main(void)
{
	char s1[9] = "AHMED----";
	char s2[13] = "EZ-ZOUINE----";
	printf("%s",ft_strjoin(s1,s2));

	return (0);

}
