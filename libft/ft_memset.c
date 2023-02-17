/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:12:06 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 14:30:38 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int main()
{
	char str1[11] = "HelloWorld";
	char str2[11] = "HelloWorld";
	char c = 'A';

	memset(str1, c, 11);
	ft_memset(str2, c, 11);
	printf("     memset: %s\n", str2);
	printf("ft_memset: %s\n", str1);

	return 0;
}*/
