/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:23:52 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:41:09 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//This function copies from src to dst how many bytes you have specified

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arraydst;
	unsigned char	*arraysrc;

	i = 0;
	arraydst = (unsigned char *)dst;
	arraysrc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		arraydst[i] = arraysrc[i];
		i++;
	}
	return (arraydst);
}
/*
int	main(void)
{
	char src[50] = "Hollaaa!!";
	char dst[50] = "Hellooo!!";

	printf("Before memcpy dest = %s\n", dst);
	ft_memcpy(dst, src, 5);
	printf("After memcpy dest = %s", dst);
	return (0);
}
*/
