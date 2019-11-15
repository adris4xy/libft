/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:01:07 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/11 12:15:37 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t a;

	a = 0;
	if (!dst || !src)
		return (0);
	while (src[a] != '\0' && dstsize > 1)
	{
		dst[a] = src[a];
		a++;
		dstsize--;
	}
	if (dstsize > 0)
		dst[a] = '\0';
	return (ft_strlen(src));
}
