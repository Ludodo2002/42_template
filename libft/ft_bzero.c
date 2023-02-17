/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:38:32 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 14:32:39 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
	{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

/*int main()
{
	char str[12] = "Hello World";
	char *salve  = str;

	printf("\nBefore bzero(): %s\n", salve);
	ft_bzero(salve, 2*sizeof(char));
	printf("After bzero: %s\n", salve);

	return 0;
}*/
