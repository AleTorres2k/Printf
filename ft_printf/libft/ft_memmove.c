/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:44:29 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:41:24 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//This function copies len bytes from string src to string dst

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	char		*arraydst;
	char		*arraysrc;

	i = 0;
	arraydst = (char *)dst;
	arraysrc = (char *)src;
	if (!dst && !src)
		return (0);
	if (arraydst > arraysrc)
	{
		while (len-- > 0)
			arraydst[len] = arraysrc[len];
	}
	else
	{
		while ((size_t)i < len)
		{
			arraydst[i] = arraysrc[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char dst[50] = "Oldstring";
// 	const char src[50] = "Hola master";

// 	printf("%s", ft_memmove(dst, src, 5));
// 	return (0);
// }