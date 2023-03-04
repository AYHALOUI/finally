/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:59 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:21:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	pa(t_list **list_a, t_list **list_b, int flag)
{
	t_list	*temp;

	temp = *list_b;
	if (temp != NULL)
	{
		*list_b = temp->next;
		temp->next = *list_a;
		*list_a = temp;
		if (flag == 1)
			ft_printf("pa\n");
	}
}

void pb(t_list **list_a, t_list **list_b, int flag)
{
	t_list *temp;

	temp = *list_a;
	if (temp != NULL)
	{
		*list_a = temp->next;
		temp->next = *list_b;
		*list_b = temp;
		if (flag == 1)
			ft_printf("pb\n");
	}
}


