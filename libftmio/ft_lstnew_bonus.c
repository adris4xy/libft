/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:05:35 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 13:48:40 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
//Reserva memoria con malloc para un nuevo elemento que devuelve.
//La variable content se inicializa mediante el valor del parámetro content.
//La variable next se inicializa con NULL.

//void *content -> El contenido del nuevo elemento.

//Retorno -> El elemento nuevo (new).