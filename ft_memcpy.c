/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:03:27 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/02 11:34:32 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int  n)
{
	char	*str_dest;
	char	*str_src;

	str_dest = (char *)dest;
	str_src = (char *)src;

	while (n--)
	{
		*str_dest = *str_src;
		str_dest++;
		str_src++;
	}
	return (dest);
}

#include<stdio.h>
int	main(int argc , char **argv)
{
	char *dest = (char *)ft_memcpy(argv[1],argv[2],5);
	printf("%s" ,dest);

	return (0);
}
