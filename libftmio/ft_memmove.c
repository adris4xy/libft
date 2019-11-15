/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:48:55 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/11 15:03:56 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (dst != '\0' || src != '\0')
	{
		if (((unsigned char *)src) < ((unsigned char *)dst))
			while (len-- > 0)
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		else
			while (i < len)
			{
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
				i++;
			}
		return (((unsigned char *)dst));
	}
	return (NULL);
}
