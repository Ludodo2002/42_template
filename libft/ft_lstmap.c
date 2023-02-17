/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:14:09 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:26:43 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*new;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!(new))
		return (NULL);
	x = new;
	while (lst)
	{
		if (lst->next)
		{
			new->next = ft_lstnew(f(lst->next->content));
			if (!(new->next))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			new = new->next;
		}
		lst = lst->next;
	}
	new->next = NULL;
	return (x);
}

/*void del(void *cont)
{
    if (cont)
    {  
        free(cont);
        cont = NULL;
     }
}
char *add(void *cont)
{
	char *ptr;

	ptr = NULL;
     if (cont)
    {  
		char *t;
		t = "TE";
		ptr = ft_strjoin(cont, t);
     }
	 return (ptr);
}
int main(void)
{
	t_list *next;
	t_list *head;
	t_list *l = ft_lstnew(ft_strdup("edith"));
	t_list *n = ft_lstnew(ft_strdup("puclla"));
	ft_lstadd_front(&l, n);
	head = n;
	ft_lstmap(head, (void *)add, del);
	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}*/