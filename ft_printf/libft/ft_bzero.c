/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:14:02 by aletorre          #+#    #+#             */
/*   Updated: 2023/04/28 13:42:20 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//This function puts character '\0' how many bytes you have specified

void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char		*array;

	i = 0;
	array = (unsigned char *)s;
	while (i < n)
	{
		array[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char array[50] = "Hola buenos dias que tal";
	printf("Before bzero: %s\n", array);
	ft_bzero(array, 5);
	printf("After bzero: %s", array);
	return (0);
}
*/
