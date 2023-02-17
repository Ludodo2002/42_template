/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:40:16 by ldevaud           #+#    #+#             */
/*   Updated: 2023/02/01 10:33:13 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	char	*res;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	if (! s)
		return (NULL);
	if (start > len)
		return (ft_strdup(""));
	if ((len - start) < size)
		res = malloc((len - start + 1) * sizeof(char));
	else
		res = malloc((size + 1) * sizeof(char));
	if (! res)
		return (NULL);
	i = 0;
	while (i < size && s[start] != '\0')
	{	
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

/*int main()
{
	char *x;
	x = ft_substr("Hello World", 0, 5);
	printf("%s\n", x);
	return (0);
}*/
