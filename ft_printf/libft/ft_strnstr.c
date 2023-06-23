/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:09:52 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:43:36 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(needle);
	if (*needle == '\0' || needle == haystack)
	{
		return ((char *)haystack);
	}
	while (haystack[i] && (size_t)i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0' && haystack[i
				+ j] == needle[j] && (size_t)i + (size_t)j < len)
			j++;
		if (j == k)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[50];
	char	substr[50];

	str[50] = "Ayer fui a comprar el pan";
	substr[50] = "comprar";
	//printf("%s", strnstr(str, substr, 18));
	printf("%s", ft_strnstr(str, substr, 18));
	return (0);
}
*/
