/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:02:19 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/12 18:02:22 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

/*int		main()
{
	char dst[10];
	char src[10];
	size_t size;
	size_t ret;
	
	size = 10;
	ft_strlcpy(dst, "123456789", size);
	ft_strlcpy(src, "abcdefghi", size);
	ret = ft_strlcat(dst, src, size);
	printf("%s\n", dst);
	printf("%zu\n", ret);
	return (0);
}	*/