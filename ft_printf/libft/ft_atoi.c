/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:11:36 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:43:47 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;
	int	found;

	i = 0;
	sign = 1;
	found = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && found)
	{
		if (str[i] >= 48 && str[i] <= 57)
			number = number * 10 + str[i] - '0';
		else
			found = 0;
		i++;
	}
	return (sign * number);
}
/*
int	main(void)
{
	char	*s;

	s = "     -123";
	printf("%d\n", ft_atoi(s));
	return (0);
}
*/