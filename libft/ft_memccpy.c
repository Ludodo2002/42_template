/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:38:22 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 14:59:27 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		if (*(unsigned char *)(src + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char dest[80];
	char *string = "42 c'est vraiment cool !";
	char *new;

	new = ft_memccpy(dest, string, 'I', 4);
	*new = '\0';
	printf("%s\n" , dest);
	return 0;
}*/