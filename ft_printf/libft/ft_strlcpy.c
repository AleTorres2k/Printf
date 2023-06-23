/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:04:38 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/31 12:54:25 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/* This function copy and concatenate strings, guaranteeing the nul-termination
 * and copies the dstsize - 1 characters
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	counter;

	counter = 0;
	i = 0;
	if (dstsize == 0)
	{
		counter = ft_strlen(src);
		return (counter);
	}
	else
	{
		counter = ft_strlen(src);
		while (src[i] && (size_t)i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (counter);
	}
}
/*
int	main(void)
{
	char arraydst[50] = "Torres Alonso";
	char arraysrc[50] = "Alejandro";
	printf("%zu\n", ft_strlcpy(arraydst, arraysrc, 5));

	ft_strlcpy(arraydst, arraysrc, 0);
	printf("%s", arraydst);
	return (0);
}
*/
