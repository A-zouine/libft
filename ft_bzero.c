/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:30:55 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/02 10:36:33 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n--)
	{
		*str++ = '0';
	}
}

#include<stdio.h>
#include <stddef.h>
int main(void)
{
	char str[9];

	ft_bzero(str, 5);
	ft_bzero(str + 5, 3);

	printf("%s",str);

	return (0);

}
