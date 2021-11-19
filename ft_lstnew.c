/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:27:50 by izail             #+#    #+#             */
/*   Updated: 2021/11/18 00:24:45 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(*tmp));
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);	
}

// #include<stdio.h>
// #include<stdlib.h>

// int ft_lstsize(t_list *lst)
// {
//   int i;
  
//   i = 0;
//   while (lst != NULL)
//   {
//     i++;
//     lst = lst->next;
//   }
//   return (i);
// }
// void  ft_lstadd_front(t_list **lst, t_list *new)
// {
//   if (!lst || !new)
//     return ;
//   if ( lst)
//   {
//     if (*lst)
//       new->next = *lst;
//     *lst = new;
//   }
// }
// void  ft_lst_print(t_list *n_list)
// {
//   while (n_list != NULL)
//   {
//     printf("%d",n_list->content);
//     printf("-->");
//     n_list = n_list->next;
//   }
// }
// int main() {
  
//   t_list *node;
//   t_list *node2;
  
//   node = ft_lstnew(54);
//   node2 = ft_lstnew(544);
  
//   ft_lstadd_front(&node,node2);
  
//   ft_lst_print(node);
//   printf("\n");
//   printf("%d",ft_lstsize(node));
  
//   return 0;
// }