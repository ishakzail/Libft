/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izail <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:58:58 by izail             #+#    #+#             */
/*   Updated: 2021/11/09 11:25:18 by izail            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				signe;
	long long		nbr;

	signe = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr * signe);
}

// #include<stdio.h>
// int main()
// {
// 	printf("%d\n",ft_atoi("-2147483647"));
// 	printf("%d\n",ft_atoi("-------214748364974"));
// 	printf("%d\n",ft_atoi("++42")*0);
// 	return (0);
// }