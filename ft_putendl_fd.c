/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:17:33 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/10/31 15:29:45 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char *create_word(char *str)
{
	int	size;

	size = ft_len(str) + 1;
	str[size] = '\n';
	return (str);
}
void	ft_putendl_fd(char *s, int fd)
{
	int	size;
	char	*result;

	write(fd, create_word(s), ft_len(s)+1);
	
}

int 	min(void)
{
	char *s = "HELLO THere is i here ";
	ft_putendl_fd(s,1);
}
