/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:12:02 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 14:59:34 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

/*int main ()
{
	char str[] = "Ludovic";
	char dst[] = "Salut";
	
	printf("%lu\n", sizeof(str));
	ft_memmove(dst, str, sizeof(str));
	printf("%s", dst);
	return (0);
}*/