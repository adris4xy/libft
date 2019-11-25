/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:34:02 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 15:56:03 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != (char)c)
		if (!s[i++])
			return (NULL);
	return ((char *)&s[i]);
}
//Localiza la primera aparacion de 'c'(convertida a char) en la cadena a la que apunta 's'.
//El '\0' se considera parte del string, si 'c' es '\0' la funcion localiza el '\0'.
//Devuelve el puntero del string desde 'c', o NULL si 'c' no esta en el string 's'.