/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:56:09 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:02:27 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_action(char *line, t_list **head_a, t_list **head_b)
{
	if (!(ft_strncmp(line, "sa\n", 3)))
	{
		sa(head_a, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "sb\n", 3)))
	{
		sb(head_b , 0);
		return (0);
	}
	if (!(ft_strncmp(line, "ss\n", 3)))
	{
        ss(head_a, head_b, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "pa\n", 3)))
	{
        pa(head_a, head_b, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "pb\n", 3)))
	{
		pb(head_a, head_b, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "ra\n", 3)))
	{
        ra(head_a, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "rb\n", 3)))
	{
		rb(head_b, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "rr\n", 3)))
	{
        rr(head_a, head_b, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "rra\n", 3)))
	{
        rra(head_a, 0);
		return (0);
	}
	if (!(ft_strncmp(line, "rrb\n", 3)))
	{
        rrb(head_b, 0);
		return (0);
	}	
	if (!(ft_strncmp(line, "rrr\n", 3)))
	{
        rrr(head_a, head_b, 0);
		return (0);
	}
	return (1);
}

void lek(void){system("leaks checker");}


int main(int ac, char **av)
{
	atexit(lek);
	char *line;
	t_list *head_a;
	t_list *head_b;
	
	 if (ac == 1)
        return (0);
    add_element(&head_a ,ac, av);
	line = get_next_line(0);
	while(line)
	{
		if (check_action(line, &head_a, &head_b))
		{
			free_list(&head_a);
			free_list(&head_b);
			quit();
		}
		free(line);
		line = get_next_line(0);
	}
	if (head_a && is_sorted(&head_a) && !head_b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_list(&head_a);
	free_list(&head_b);
	return (0);
}
