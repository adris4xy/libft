/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:39:15 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/21 11:38:49 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (!(substr = (char *)malloc(sizeof(char) * ((int)len + 1))))
		return (NULL);
	*substr = '\0';
	if (start <= ft_strlen(s))
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
