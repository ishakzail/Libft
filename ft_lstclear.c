/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:48:44 by izail             #+#    #+#             */
/*   Updated: 2021/11/20 03:30:14 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp_next = (*lst)->next;
		free(*lst);
		*lst = tmp_next;
	}
}
