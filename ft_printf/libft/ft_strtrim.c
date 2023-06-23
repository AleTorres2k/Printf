/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:47:25 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:44:53 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(&s1[start]);
	if (len > 0)
	{
		while (s1[start + len - 1] && ft_strchr(set, s1[start + len - 1]))
			len--;
	}
	aux = ft_substr(s1, start, len);
	return (aux);
}
/*
int	main(void)
{
	char const	string[50];
	char const	letras[5];

	string[50] = "ay una manzana";
	letras[5] = "an";
	printf("%s", ft_strtrim(string, letras));
	return (0);
}
*/