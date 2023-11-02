/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:25:10 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/02 22:22:47 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_h

# include<stddef.h>
# include<stdio.h>
# include<string.h>

void	*ft_memmove(void *dest, const char *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, int  n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	atoi(const char *str);




#endif
