/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:07:25 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/02 21:54:24 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	j;

	len_dest = 0;
	while (dest[len_dest] && len_dest < size)
		len_dest++;
	if (len_dest >= size || size <= 0)
		return (len_dest);
	j = 0;
	while (size > (len_dest + j + 1) && src[j])
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	if (len_dest < size)
		dest[len_dest + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (len_dest + j);
}
int main() {
    char destination[4] = "He";
    char source[] = "World!";

    // Concaténer source à la fin de destination
    size_t total_length = ft_strlcat(destination, source, sizeof(destination));

    printf("Destination: %s\n", destination);
    printf("Total Length: %zu\n", total_length);

    return 0;
}
