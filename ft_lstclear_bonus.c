/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aez-zoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:09:20 by aez-zoui          #+#    #+#             */
/*   Updated: 2023/11/18 17:46:29 by aez-zoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*head;

	if (lst && del)
	{
		head = *lst;
		while (head != NULL)
		{
			temp = head->next;
			ft_lstdelone(head, del);
			head = temp;
		}
		*lst = NULL;
	}
}
