/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:03:39 by izail             #+#    #+#             */
/*   Updated: 2021/11/09 18:22:43 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dst;
	unsigned int	len;
	unsigned int	i;
	len = 0;
	while (s1[len] != '\0')
		len++;
	dst = malloc(sizeof(char) * (len + 1));
	i = 0;
	if(!s1)
		return (0);
	while (i != (len + 1))
	{
		dst[i] = s1[i];
		i++;
	}
	return (dst);
}
