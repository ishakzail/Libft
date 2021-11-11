/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:38:59 by izail             #+#    #+#             */
/*   Updated: 2021/11/11 14:13:29 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	else
	{
		while (*s1 != '\0')
		{
			str[i] = *s1++;
			i++;
		}
		while (*s2 != '\0')
		{
			str[i] = *s2++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
