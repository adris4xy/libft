/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:50:09 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 10:55:56 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*news;

	i = 0;
	news = s;
	while (n--)
	{
		news[i] = 0;
		i++;
	}
}
//Introduce en un unsigned char string el contenido de void *s, y convierte todo el contenido en '\0'