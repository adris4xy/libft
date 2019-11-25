/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:08:23 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 15:32:25 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = -1;
	if (s == NULL)
		return ;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}
//Escribe string 's' sobre el 'file descriptor' proporcionado, seguida de un salto de línea.