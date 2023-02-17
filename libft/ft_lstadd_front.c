/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:11:41 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 11:39:21 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (!alst)
		return ;
	new->next = *alst;
	*alst = new;
}

/*int main(void)
{
	int count;
	t_list *next;
	t_list *head;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	
	ft_lstadd_front(&l, n);
	head = n;
	count = 0;
	
	while(head)
	{
		count = count + 1;
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	printf("%d", count);
	return (0);
}*/