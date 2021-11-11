/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:01:44 by izail             #+#    #+#             */
/*   Updated: 2021/11/11 18:41:49 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd = open("Files/text3.txt",O_CREAT | O_WRONLY, 0600);
	if( fd < 0)
		printf("File can't be readed and opened");
	ft_putendl_fd("Ishak",fd);
	return (0);
}
