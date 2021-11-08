/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:48:03 by izail             #+#    #+#             */
/*   Updated: 2021/11/08 15:05:16 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t i;
	
	i = 0;
	str = s;
	if (n == 0)
		return;
	while (i < n)
		str[i++] = 0;
	
}

#include<stdio.h>
#include<string.h>

int main()
{
	char s[] = "hello";
	ft_bzero(s,2);
	printf("test : %s",s);
	return (0);

}
