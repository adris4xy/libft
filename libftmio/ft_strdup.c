/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:35:13 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 16:00:01 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;
	int		i;

	len = ft_strlen(s1);
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
//Asigna suficiente memoria en s2 para una copia de la cadena s1, hace la copia y devuelve un puntero a s2.
//El puntero del malloc creado de s2 puede utilizarse posteriormente como argumento para la función free.