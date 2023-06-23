/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aletorre <aletorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:54:06 by aletorre          #+#    #+#             */
/*   Updated: 2023/05/31 14:07:06 by aletorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*This function finds the last ocurrence of the character you have passed in
* the parameters and then returns all the string after the ocurrence found
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*aux;

	aux = (char *)s;
	c = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (aux[i] == c)
			return (aux + i);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	string[50];
	int			c;

	string[50] = "Hola buenas tardes";
	c = 'a';
	printf("%s", ft_strrchr(string, c));
	return (0);
}
*/