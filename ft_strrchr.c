/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:31:40 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/31 20:34:49 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strrchr(const char *str, int chr)
{
	int	i;
	int	j;
	int	first;

	i = 0;
	j = 0;
	first = 0;
	while (str[i])
	{
		if (str[i] == chr)
		{
			j++;
			first = i;
		}
		if (j == 2)
			return (&str[i]);
		i++;
	}
	if (first != 0)
		return (&str[first]);
	else
		return (0);
}
