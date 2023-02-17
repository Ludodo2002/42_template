/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:13:16 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:13:40 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f((lst)->content);
		lst = lst->next;
	}
}

/*void add(void *cont)
{
    if (cont)
    {  
		char *t;

		t = "TE";
		ft_strjoin(cont, t);
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

	ft_lstiter(head, add);

	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}*/
