/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:24:57 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 15:30:49 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	if (s == NULL)
		return ;
	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
}
//Escribe la string 's' sobre el descriptor de fichero proporcionado.