/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:40 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:17:25 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


void	ra(t_list **list, int flag)
{
    t_list *temp;
    t_list *temp2;

    if (!*list || !list)
        return ;
    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = temp2;
        *list = temp2->next;
        temp2->next = NULL;
        if (flag == 1)
            ft_printf("ra\n");
    }
}


void	rb(t_list **list, int flag)
{
    t_list *temp;
    t_list *temp2;

    if (!*list || !list)
        return ;
    temp = *list;
    temp2 = *list;
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = temp2;
        *list = temp2->next;
        temp2->next = NULL;
        if (flag == 1)
            ft_printf("rb\n");
    }
}

void	rr(t_list **list_a, t_list **list_b, int flag)
{
    if (!*list_a || !*list_b || list_a || list_a)
		return ;
    rb(list_b, flag);
    ra(list_a, flag);
    if (flag == 1)
        ft_printf("rr\n");
}