/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:58:41 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/14 18:25:43 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	unsigned int	i;
	size_t			count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (count);
}

static size_t	ft_wordlen(const char *s, char c)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i++])
		len++;
	return (len);
}

char			**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		**table;

	i = 0;
	k = 0;
	if (!s || !(table = (char **)malloc(sizeof(char *)
		* (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		table[i] = (char *)malloc(sizeof(char)
		* (ft_wordlen(&s[k], c)));
		if (!(table[i]))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			table[i][j++] = s[k++];
		i++;
	}
	table[i] = NULL;
	return (table);
}
