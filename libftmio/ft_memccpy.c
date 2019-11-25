/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:47:23 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 15:14:36 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (&((unsigned char *)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
//Copia bytes de la cadena *src a la cadena *dst. Si el caracter 'c' (convertido a unsigned char) aparece
//en la cadena *src, la copia se detiene y retorna un puntero de dst apuntando al caracter siguiente de 'c'.
//Si no hay 'c', se copian 'n' bytes y se devuelve un puntero NULL.