/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:43:06 by izail             #+#    #+#             */
/*   Updated: 2021/11/15 15:18:22 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
static int    nbnb(int nb)
{
    int    len;

    len = 0;
    if (nb <= 0)
        len++;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int        i;
    char    *str;

    i = nbnb(n);
    str = malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
        str[0] = '-';
    while (n != 0)
    {
        if (str[0] == '-')
            str[i--] = '0' - (n % 10);
        else
            str[i--] = '0' + (n % 10);
        n = n / 10;
    }
    return (str);
}
