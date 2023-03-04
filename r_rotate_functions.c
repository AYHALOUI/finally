/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:49 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 19:59:49 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list, int flag)
{
    t_list *temp;
    t_list *temp2;

    if (!*list || !list)
        return ;
    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next = temp2;
        *list = temp->next;
        temp->next = NULL;
        if (flag == 1)
            ft_printf("rra\n");
    }
}

void	rrb(t_list **list, int flag)
{
    t_list *temp;
    t_list *temp2;

    if (!*list || !list)
        return ;
    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next->next = temp2;
        *list = temp->next;
        temp->next = NULL;
        if (flag == 1)
            ft_printf("rrb\n");
    }
}

void	rrr(t_list **list_a, t_list **list_b, int flag)
{
    if (!*list_a || !*list_b || list_a || list_a)
		return ;
    rra(list_a, flag);
    rrb(list_b, flag);
    if (flag == 1)
        ft_printf("rrr\n");
}