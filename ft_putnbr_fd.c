/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:42:23 by izail             #+#    #+#             */
/*   Updated: 2021/11/11 18:55:33 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}


void ft_putnbr_fd(int n, int fd)
{
    	long long	nbr;

        nbr = n;
        if (nbr < 0)
        {
            nbr = (nbr * -1);
            ft_putchar_fd('-',fd);
        }
        if (nbr >= 10)
        {
            ft_putnbr_fd((nbr / 10),fd);
	}
	ft_putchar_fd(((nbr % 10) + '0'),fd);

    
}

#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd = open("Files/text5.txt",O_CREAT | O_WRONLY, 0600);
	if( fd < 0)
		printf("File can't be readed and opened");
	ft_putnbr_fd(000554,fd);
	return (0);
}
