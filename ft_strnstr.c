/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:20:59 by izail             #+#    #+#             */
/*   Updated: 2021/11/09 16:55:09 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	if (n[0] == '\0')
		return (n);
	i = 0;
	while (h[i] != '\0' && i < len)
	{
		j = 0;
		if (h[i] == n[j])
		{
			while (i + j < len && h[i + j] == n[j])
			{
				j++;
				if (!n[j])
					return (&h[i]);
			}
		}
		i++;
	}
	return (0);
}
