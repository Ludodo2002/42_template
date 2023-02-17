/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:06:49 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/11 09:26:00 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	c;

	if (*find == 0 || s == find)
		return ((char *)s);
	c = ft_strlen(find);
	while (*s && c <= len--)
	{
		if (!(ft_strncmp((char *)s, (char *)find, c)))
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*int main()
{
	char *s;
	s = "Hello World";
	printf("%s\n", ft_strnstr(s, "llo", 5));
	return (0);
}*/
