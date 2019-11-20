/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:13:06 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/20 17:55:21 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	int		conclen;
	int		i;
	int		o;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	conclen = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(conc = malloc(sizeof(char) * conclen)))
		return (NULL);
	i = -1;
	while (s1[++i])
		conc[i] = s1[i];
	o = -1;
	while (s2[++o])
		conc[i++] = s2[o];
	conc[i] = '\0';
	return (conc);
}
