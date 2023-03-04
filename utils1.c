/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:31:45 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 18:36:02 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_list(t_list *head)
{
    t_list *temp;
    t_list *temp2;
    int i;
    int j;
    int index;

    temp = head;
    i = 0;
    index = 0;
    while (temp != NULL)
    {
        temp2 = head;
        j = 0;
        while (temp2 != NULL)
        {
            if (temp->data > temp2->data)
                j++;
            temp2 = temp2->next;
        }
        temp->index = j;
        temp = temp->next;
    }
}


int get_position(t_list *head, int index)
{
    t_list *temp = head;
    int position = 0;
    while (temp != NULL)
    {
        if (temp->index == index)
            return(position);
        position++;
        temp = temp->next;
    }
    return (position);
}

void free_list(t_list **head)
{
    t_list *temp;
    t_list *temp1;

    temp = *head;
    while (temp != NULL)
    {
        temp1 = temp->next;
        free(temp);
        temp = temp1;
    }
    *head = NULL;
}

void free_split(char **split)
{
    int i;

    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}