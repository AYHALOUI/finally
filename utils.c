/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:31 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:14:08 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int instriction(int size_b, int pos)
{
	int middle;
	int instriction;
	if (size_b < 2)
		return (0);
	middle = (size_b / 2);
	if (pos >= middle)
		instriction = (size_b - pos) + 1;
	else
		instriction = pos;
	return (instriction);
}

int check_if_duplicate(t_list **head)
{
    t_list *temp, *temp1;

    temp = *head;
    temp1 = temp->next;
	while (temp != NULL) 
	{    
        temp1 = temp->next;
        while (temp1 != NULL) 
		{    
            if(temp->data == temp1->data)
                return (1);
			temp1 = temp1->next;		    
        }
        temp = temp->next;
    }
	return (0);
}

char **check_and_join(int ac,char **av)
{
    char *str;
    char **tab;
    int i;

    i = 1;
    str = ft_strdup(""); 
    while (av[i])
    {
        check_string(ac , av[i]);
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    tab = ft_split(str, ' ');
    free(str);
    return (tab);
}

int is_sorted(t_list **head)
{
    t_list *temp;

    temp = *head;
    while (temp->next != NULL)
    {
        if (temp->data > temp->next->data)
            return (0);
        temp = temp->next;
    }
    return (1);
}

void add_element(t_list **head, int ac, char **av)
{
    char **split;
    int i;
    
    i = 0;
    split = check_and_join(ac, av);
    *head = ft_lstnew(ft_atoi(split[i]));
    i = 1;
    while (split[i])
    {
        ft_lstadd_back(head, ft_lstnew(ft_atoi(split[i])));
        i++;
    }
  free_split(split);
    if (check_if_duplicate(head))
    {
        free_list(head);
        quit();
    }
    else if (is_sorted(head))
    {
        free_list(head);
        exit(0);
    }
    index_list(*head);
}
