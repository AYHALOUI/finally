/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:20 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 18:20:47 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void sort_5(t_list **head_a, t_list **head_b)
{
    int mid;
    int i;

    i = 0;
    while (ft_lstsize(*head_a) > 3)
    {
        mid = ft_lstsize(*head_a) / 2;
        while (get_position(*head_a, i) > mid && get_position(*head_a, i) != 0)
            rra(head_a, 1);   
        while (get_position(*head_a, i) <= mid && get_position(*head_a, i) != 0)
            ra(head_a, 1);
        if (get_position(*head_a, i) == 0)
            pb(head_a, head_b, 1);    
        i++;      
    }
    if (ft_lstsize(*head_a) == 3)
        sort_3(head_a);
    pa(head_a, head_b, 1);
    pa(head_a, head_b, 1);        
}































































