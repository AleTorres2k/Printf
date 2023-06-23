/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:52:37 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:42:03 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/*This function copies and concatenate strings, this one concatenates the string
 *  to the end of dst, and also guarantee the nul-terminating character, it
 *  copies dstsize - 1 character
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	sizedst;
	unsigned int	sizesrc;
	unsigned int	totallength;

	i = 0;
	totallength = 0;
	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (dstsize > sizedst)
	{
		totallength = sizedst + sizesrc;
	}
	else
	{
		totallength = sizesrc + dstsize;
	}
	while (src[i] && sizedst + 1 < dstsize)
	{
		dst[sizedst] = src[i];
		sizedst++;
		i++;
	}
	dst[sizedst] = '\0';
	return (totallength);
}
/*
int	main(void)
{	
	const char src[50] = "buenas tardes";
	char dst[50] = "Hola ";
	
	printf("%zu\n",ft_strlcat(dst, src, 8));
	printf("%s", dst);
		
	return (0);
}
*/
