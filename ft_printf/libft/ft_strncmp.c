/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:12:29 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:42:57 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				pos;
	unsigned const char	*str1;
	unsigned const char	*str2;

	pos = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	while ((pos < n - 1) && (str1[pos] != '\0')
		&& (str2[pos] != '\0')
		&& (str1[pos] == str2[pos]))
		pos++;
	if (str1[pos] - str2[pos] < 0)
		return (-1);
	else if (str1[pos] - str2[pos] == 0)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("%i", ft_strncmp("test\200", "test\0", 6));
	return (0);
}
*/
