/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:12:03 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:12:47 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (!lst)
		return ;
	while (*lst)
	{
		x = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = x;
	}
}

/*void del(void *cont)
{
    if (cont)
    {  
        free(cont);
        cont = NULL;
     }
}

int main(void)
{
	t_list *next;
	t_list *head;
	
	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	
	ft_lstadd_front(&l, n);
	head = n;

	ft_lstclear(&head, del);

	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}*/
