/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:48:17 by izail             #+#    #+#             */
/*   Updated: 2021/11/16 23:05:27 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    t_list  *last_elm;
    
    last_elm = lst;
    if (last_elm == NULL)
        return (NULL);
    while (last_elm->next != NULL)
        last_elm = last_elm->next;
    return (last_elm);
}
