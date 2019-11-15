/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:54:35 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/08 17:55:24 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	while (i >= j)
		if (s[i - j++] == (char)c)
			return ((char *)&s[i - (j - 1)]);
	return (NULL);
}
