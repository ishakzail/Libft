/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:25:53 by izail             #+#    #+#             */
/*   Updated: 2021/11/09 12:24:17 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize > 0)
	{
		while (*(src + len) != '\0')
		{
			if (len == dstsize)
			{
				len--;
				break ;
			}
			*(dst + len) = *(src + len);
			len++;
		}
	}
	*(dst + len) = '\0';
	while (*(src + len) != '\0')
		len++;
	return (len);
}
/*#include<stdio.h>
void test(size_t size)
{
	char source[] = "Hello There, Venus";
	char dest[19];
	size_t r;

	r = ft_strlcpy(dest,source,size);
	printf("Copied '%s' into '%s' , Length : %zu\n", source, dest, r);
}
int main()
{
	test(29);
	test(10);
	test(0);

	return (0);
}*/
