/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:12:52 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:13:11 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (!del)
		return ;
	del(lst->content);
	free(lst);
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

	ft_lstdelone(head, del);

	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}*/
