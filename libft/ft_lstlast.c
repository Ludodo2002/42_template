/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:13:46 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:14:05 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list *head;
	t_list *last;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	
	ft_lstadd_front(&l, n);
	head = n;
	
	last = ft_lstlast(head);
	printf("%s", (char *) (last->content));
	return (0);
}*/
