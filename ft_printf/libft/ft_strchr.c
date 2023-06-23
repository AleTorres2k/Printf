/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:06:24 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/30 13:42:25 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*This function finds the first ocurrence of the character you have passed
 * in the parameters of the string and returns all the string after the 
 ocurrence found.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*aux;
	size_t	i;

	c = (char)c;
	aux = (char *)s;
	i = 0;
	while (aux[i] != c)
	{
		if (aux[i] == '\0')
			return (NULL);
		i++;
	}
	return (aux + i);
}

// int	main(void)
// {
// 	const char	str[] = "teste";
// 	int					ch;

// 	ch = 'e';

// 	printf("%s", ft_strchr(str, ch));
// 	return (0);
// }
