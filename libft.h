/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:25:10 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/03 15:07:30 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_h

# include<stddef.h>
# include<stdio.h>
# include<string.h>
# include<stdlib.h>

int	ft_isalph(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
char	*ft_strchar(const char *s, int c);
char	*ft_strrchar(const char *s, int c);
char	*ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_memchr(const void *s1, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const char *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, int  n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_atoi(const char *str);
char	*ft_strnstr(const char *big, const char *to_find, size_t len);
size_t	 ft_strlcat(char *dst, const char *source, size_t size);
char	*ft_strdup(const char *str);

#endif
