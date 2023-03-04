/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:53:23 by ahaloui           #+#    #+#             */
/*   Updated: 2023/03/04 20:14:35 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_h
#define PUSH_SWAP_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
# include <limits.h>
#include "printf/ft_printf.h"
#include "libft/libft.h"
#include "getnextline/get_next_line.h"


void print_list(t_list *head);


// parsing functions
void    quit();
int     check_is_empty(char *str);
int     is_contain_allspace(char *str);
int     check_is_digit(char *str);
void    check_string(int ac, char *str);

// utils functions
int     check_if_duplicate(t_list **head);
char    **check_and_join(int ac,char **av);
int     is_sorted(t_list **head);
void    add_element(t_list **head, int ac, char **av);
int     instriction(int size_b, int pos);

// swap functions
void 	sa(t_list **head_a, int flag);
void 	sb(t_list **head_b, int flag);
void 	ss(t_list **head_a, t_list **head_b , int flag);

// reverse rotate functions
void 	rra(t_list **head_a, int flag);
void 	rrb(t_list **head_b, int flag);
void 	rrr(t_list **head_a, t_list **head_b, int flag);

// rotate functions
void 	ra(t_list **head_a, int flag);
void 	rb(t_list **head_b, int flag);
void 	rr(t_list **head_a, t_list **head_b, int flag);

// push functions
void 	pa(t_list **head_a, t_list **head_b, int flag);
void 	pb(t_list **head_a, t_list **head_b, int flag);
void    pp(t_list **head_a, t_list **head_b, int flag);


// sort three elements
void    sort_3(t_list **head_a);
void    help_sort_three(t_list **head_a, int index_node);
int 	get_index_max(t_list *head, int max);
int 	find_max(t_list *head);

// sort five elements
void    sort_5(t_list **head_a, t_list **head_b);

// utils1 functions
int 	get_position(t_list *head, int index);
void 	index_list(t_list *head);
void    free_split(char **split);
void    free_list(t_list **head);


// sort functions
void f1(t_list **head_a, t_list **head_b, int size_b);
void f2(t_list **head_a, t_list **head_b, int size_b);
void push_to_B(t_list **head_a, t_list **head_b, int chunk);
void sort_100(t_list **head_a, t_list **head_b, int chunk_divide);
int	check_action(char *line, t_list **head_a, t_list **head_b);
void free_list(t_list **head);

#endif