/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/06 14:59:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head_a, int flag)
{
	t_list	*temp;
	t_list	*temp2;

	if (!*head_a || !head_a)
		return ;
	temp = *head_a;
	temp2 = *head_a;
	if (temp->next != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = temp2;
		*head_a = temp2->next;
		temp2->next = NULL;
		if (flag == 1)
			ft_printf("ra\n");
	}
}

void	rotate_b(t_list **head_b, int flag)
{
	t_list	*temp;
	t_list	*temp2;

	if (!*head_b || !head_b)
		return ;
	temp = *head_b;
	temp2 = *head_b;
	if (temp->next != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = temp2;
		*head_b = temp2->next;
		temp2->next = NULL;
		if (flag == 1)
			ft_printf("rb\n");
	}
}

void	rotate_r(t_list **head_a, t_list **head_b, int flag)
{
	if (!*head_a || !*head_b || head_a || head_b)
		return ;
	rotate_b(head_b, flag);
	rotate_a(head_a, flag);
	if (flag == 1)
		ft_printf("rr\n");
}
