/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortega- <aortega-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:45:52 by aortega-          #+#    #+#             */
/*   Updated: 2019/11/25 12:30:30 by aortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst != NULL)
	{
		tmp = *alst;
		if (*alst == NULL) //Si no hay ningun elemento, pues ponemos new como la primera de la lista.
			*alst = new;
		else //Si hay 1 o mas elementos, new se va pasando al final de la lista.
		{
			while (tmp->next) 
				tmp = tmp->next;
			tmp->next = new;
		}
	}
}
//Añade el elemento new al final de la lista.
//alst -> La dirección del puntero al primer elemento de la lista.
//*new   -> La dirección del puntero al elemento que hay que añadir a la lista