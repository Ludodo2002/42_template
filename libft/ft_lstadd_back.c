/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:11:18 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:23:42 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*i;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	i = *alst;
	while (i->next)
	{
		i = i->next;
	}
	i->next = new;
}

/*int main(void)
{
	int count;
	t_list *next;
	t_list *head;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	t_list *p = ft_lstnew(ft_strdup("pareja"));

	ft_lstadd_front(&l, n);
	ft_lstadd_back(&n, p);
	head = l;
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
