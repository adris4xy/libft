/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:49:45 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 15:20:44 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
		i++;
	if (i == n)
		return (0);
	else
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
//Compara s1 y s2 asumiendo que tienen las dos longitud 'n'.
//Devuelve cero si las dos cadenas son idénticas; de lo contrario, 
//devuelve la diferencia entre primeros dos bytes diferentes.
//Las cadenas de longitud cero son siempre idénticas.