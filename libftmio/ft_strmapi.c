/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:16:17 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 16:44:28 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcpy1(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strcpy1(str, s);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
//Aplica la función 'f' a cada carácter de la de string pasada como argumento
//para crear una nueva string con malloc que resulte de las aplicaciones sucesivas de f.
//Devuelve la string que resulte de las aplicaciones sucesivas de 'f'. NULL si falla la asignación.