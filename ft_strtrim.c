/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:43:13 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/15 17:38:49 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_trim(char const c, char const *trim)
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

static	int	ft_get_position_first(char const *str, char const *trim)
{
	int	i;

	i = 0;
	while (*str && ft_is_trim(*str, trim))
	{
		i++;
		str++;
	}
	return (i);
}

static int	ft_get_last_position(char const *str, char const *trim)
{
	int	len;
	int	i;

	len = ft_strlen(str) - 1;
	i = 0;
	while (str[len] && ft_is_trim(str[len], trim))
	{
		len--;
		i++;
	}
	return (len);
}

static int	ft_get_str_len(char const *str, char const *sep)
{
	int	end;
	int	start;

	end = ft_get_last_position(str, sep);
	if (end == -1)
		return (0);
	start = ft_get_position_first(str, sep);
	return (++end - start);
}

char	*ft_strtrim(char const *s1, char const *sep)
{
	int		len;
	char	*trim;
	int		i;
	int		start;

	i = 0;
	trim = NULL;
	if (s1 != NULL && sep != NULL)
	{
		i = 0;
		len = ft_get_str_len(s1, sep) + 1;
		trim = (char *)malloc(len);
		if (!trim)
			return (0);
		start = ft_get_position_first(s1, sep);
		while (i < len - 1)
		{
			trim[i] = s1[start];
			start++;
			i++;
		}
		trim[i] = '\0';
	}
	return (trim);
}
