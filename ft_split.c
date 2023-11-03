/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:14:23 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/31 12:32:38 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sep(char const c, char const s)
{
	if (c == s)
		return (1);
	return (0);
}
int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count_word;

	count_word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && !is_sep(s[i], c))
			i++;
		if(s[i] != '\0')
			count_word++;
		i++;
	}
	return (count_word);
}

int	len_word(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int	i;
	int	size;
	char	**split;

	size = ft_count_word(char const *s, char c ) + 1;
	i = 0;
	while (*s)
	{
		if(is_sep(*s, c))
		{
			ft_create_word(s, 

#include<stdio.h>
int	main(void)
{
	char	*str;

	str = "-nBonjour tonut monden";
	char c = '-';

	printf("%d",ft_count_word(str, c));

	return (0);
}
