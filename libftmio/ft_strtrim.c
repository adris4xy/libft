/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:31:31 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/15 18:55:39 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	boolean;

	boolean = 'T';
	count = 0;
	i = 0;
	while (s1[i] && boolean == 'T')
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				boolean = 'T';
				break ;
			}
			boolean = 'F';
			j++;
		}
		i++;
	}
	return (count);
}

static int	ft_end(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	char	boolean;

	boolean = 'T';
	count = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0 && boolean == 'T')
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				count++;
				boolean = 'T';
				break ;
			}
			boolean = 'F';
			j++;
		}
		i--;
	}
	return (count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	size;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	else if ((s2 = (char*)malloc((ft_strlen(s1)
	- start - end + 1) * sizeof(char))) == 0)
		return (NULL);
	size = ft_strlen(s1) - end;
	while (start < size)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
