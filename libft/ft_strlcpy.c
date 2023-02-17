/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:02:27 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/12 18:02:45 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
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
}*/