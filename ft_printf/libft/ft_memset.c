/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:19:03 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:40:49 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//This function puts the number of times of the character you have
//put in the parameter in the array

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*array;

	i = 0;
	array = (unsigned char *)b;
	while (i < len)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks";
	printf("Before memset(): %s\n", str);
	//Fill 8 characters starting from str[13] with .
	ft_memset(str + 13, '.', 8*sizeof(char));
	printf("After memset(): %s", str);
}
*/
