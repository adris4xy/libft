/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:36:03 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 12:32:33 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*elem;

	elem = new;
	elem->next = *alst;
	*alst = elem;
}
//Añade el elemento new al principio de la lista.
//alst -> La dirección del puntero al primer elemento de la lista.
//new  -> La dirección del puntero al elemento que hayque añadir a la lista.