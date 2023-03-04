/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:24:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:18:22 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **list, int flag)
{
    int temp;

     if(ft_lstsize(*list) < 2)
        return ;
    if ((*list)->next != NULL)
    {
        temp = (*list)->data;
       (*list)->data = (*list)->next->data;
       (*list)->next->data = temp;
	   if (flag == 1)
	   		ft_printf("sa\n");
    }
}


void	sb(t_list **list, int flag)
{
    int temp;

    if(ft_lstsize(*list) < 2)
        return ;
    if ((*list)->next != NULL)
    {
        temp = (*list)->data;
       (*list)->data = (*list)->next->data;
       (*list)->next->data = temp;
       if (flag == 1)
	   		ft_printf("sa\n");
    }
}

void	ss(t_list **list_a, t_list **list_b, int flag)
{
    if (!*list_a || !*list_b || list_a || list_a)
		return ;
    sa(list_a, flag);
    sb(list_b, flag);
    if (flag == 1)
        ft_printf("ss\n");
}