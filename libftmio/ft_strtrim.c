/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:31:31 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/12 14:49:05 by aortega-         ###   ########.fr       */
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
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start == ft_strlen(s1))
		end = 0;
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!s2)
		return (NULL);
	size = ft_strlen(s1) - start - end;
	while (size > 0)
	{
		s2[i++] = s1[start++];
		size--;
	}
	s2[i] = '\0';
	return (s2);
}
