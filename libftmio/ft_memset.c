/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:50:21 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/06 14:58:24 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newb;
	int				i;

	i = 0;
	newb = (unsigned char*)b;
	while (len--)
	{
		newb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
