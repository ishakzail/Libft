/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:48:44 by izail             #+#    #+#             */
/*   Updated: 2021/11/18 04:14:15 by izail            ###   ########.fr       */
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


#include<stdio.h>

void ft_lstprint(t_list *lst)
{
  if (!lst)
    printf("List is empty!");
  while (lst)
  {
    printf("content : %s\n",lst->content);
    lst = lst->next;
  } 
}

void del(void *content)
{
    char *str;
    str = content;
    int i = 0;
    while(str[i])
    {
      str[i] = '\0';
      i++;
    }
} 


/*void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list    *temp;

    if (del && lst)
    {
        while (*lst)
        {
            temp = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = temp;
        }
        *lst = NULL;
    }
} */

/*void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list    *current;
    t_list    *next;

    if (lst)
    {
        current = *lst;
        while (current)
        {
            next = current->next;
            ft_lstdelone(current, (del));
            current = next;
        }
        *lst = NULL;
    }
}*/


int main() {


  t_list *node1;
  t_list  *node2;
  
  node1 = ft_lstnew(ft_strdup("Ishak"));
  //node2 = ft_lstnew(ft_strdup("Test"));
  
  //ft_lstadd_back(&node1, node2);
  
  //ft_lstdelone(node1, del);
  ft_lstclear(&node1, del);
  
  ft_lstprint(node1);
  
  
  return 0;
}