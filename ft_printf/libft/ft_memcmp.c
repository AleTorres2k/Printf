/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:08:08 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:43:25 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				pos;
	unsigned char	*str1;
	unsigned char	*str2;

	pos = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((size_t)pos < n - 1 && str1[pos] == str2[pos])
		pos++;
	return (str1[pos] - str2[pos]);
}
/*
int	main(void)
{
	const char str1[50] = "Hola";
	const char str2[50] = "Adios";

	printf("%i", ft_memcmp(str1, str2, 3));
	return (0);
}
*/
