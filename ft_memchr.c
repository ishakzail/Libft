/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:17:04 by izail             #+#    #+#             */
/*   Updated: 2021/11/08 11:54:59 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;

	p = s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return ((void *)p);
	}
	return (0);
}
