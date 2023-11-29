/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:55:37 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 21:47:16 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long		result;


	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (9223372036854775807 - (str[i] - '0')) / 10 )
		{
			if (sign == 1)
            return (-1);
          else if (sign == -1)
            return (0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)sign * result);
}

int	main(void)
{
	char *str = "-1234567892345678934567892345678";
	printf("%d", ft_atoi(str));


	}
