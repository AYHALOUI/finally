/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:45:16 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:19:18 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void lek(void){system("leaks push_swap");}


// function to print the list
void print_list(t_list *head)
{
	t_list *temp;
	temp = head;
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

void sort(t_list **head_a, t_list **head_b)
{
	int size;

	size = ft_lstsize(*head_a);
	if (size == 2)
		sa(head_a, 1);
	else if (size == 3)
		sort_3(head_a);
	else if (size <= 5)
		sort_5(head_a, head_b);
	else if (size > 5 && size <= 100)
		sort_100(head_a, head_b, 5);
	else
		sort_100(head_a, head_b, 9);
}

// void    leaks(void)
// {
//     system("leaks push_swap");
// }

int main(int ac, char **av)
{
	// atexit(lek);
	// last?????????????
	t_list *head_a;
	t_list *head_b;
	if (ac == 1)
		return (0);
	add_element(&head_a ,ac, av);
	sort(&head_a, &head_b);
	// print_list(head_b);
	free_list(&head_a);
	// while(1);
	return (0);
}
