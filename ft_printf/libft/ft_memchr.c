/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:06:09 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:43:13 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	c = (unsigned char)c;
	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == c)
			return (aux + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str[50];

	str[50] = "http://www.tutorialspoint.com";
	printf("%s", ft_memchr(str, '.', 11));
	return (0);
}
*/