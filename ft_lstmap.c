/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:49:01 by izail             #+#    #+#             */
/*   Updated: 2021/11/16 23:00:56 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void*))
{
    t_list	*new_lst;
	t_list	*tmp_lst;
	t_list	*tmp_new;

	if (!lst || !f)
		return (NULL);
	if (!(new_lst = ft_lstnew((*f)(lst->content))))
		return (NULL);
	tmp_lst = lst->next;
	tmp_new = new_lst;
	while (tmp_lst)
	{
		if (!(tmp_new->next = ft_lstnew((*f)(tmp_lst->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		tmp_new = tmp_new->next;
		tmp_lst = tmp_lst->next;
	}
	return (new_lst);
}
