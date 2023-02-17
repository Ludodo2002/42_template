/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:26:06 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:26:34 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*x;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
	{
		s1++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	x = ft_substr(s1, 0, len + 1);
	return (x);
}

/*int main(void)
{
    char *c;
    char *a;
    char *ptr;
    
	c = "\t\t\t\t\t\t\t\tHello \t  Please\n Trim me !\t\t\t\t\t\t\t";
    a = "	";
    ptr = ft_strtrim(c, a);
    printf("%s", ptr);

    return (0);
}*/
