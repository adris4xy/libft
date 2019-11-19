/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:21:09 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/19 17:22:02 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	av;
	char			toprint;

	if (n < 0)
	{
		write(fd, "-", 1);
		av = n * (-1);
	}
	else
		av = n;
	if (av / 10 != 0)
		ft_putnbr_fd(av / 10, fd);
	toprint = (av % 10) + 48;
	write(fd, &toprint, 1);
}
