/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:11:54 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 14:33:36 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*int main(){
	const char str[] = "Hola Mundo";
	const char ch = 'a';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}*/
