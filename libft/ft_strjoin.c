/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:41:02 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 12:56:35 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*x;
	size_t	c1;
	size_t	c2;
	size_t	i;

	i = 0;
	c2 = 0;
	c1 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	x = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(x))
		return (NULL);
	while (c1 != ft_strlen(s1))
	{
		x[i++] = s1[c1++];
	}
	while (c2 != ft_strlen(s2))
	{
		x[i++] = s2[c2++];
	}
	x[i] = '\0';
	return (x);
}

/*int		main()
{
	char *x;
	x = ft_strjoin("Hello", " World");
	printf("%s\n", x);
	return (0);
}*/
