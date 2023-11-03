/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:28:26 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/30 13:45:31 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	size;
	char	*str;
	int	i;

	size = len - start;
	str = (char *)malloc((size + 1));
	if(!str)
		return (0);
	i = 0;
	while(s[start] != '\0')
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
#include<stdio.h>
int main(void)
{
	char s[15] = "AHMED EZ_ZOUINE";
	printf("%s",ft_substr(s,10,15));

	return (0);

}
