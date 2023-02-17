/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:08:10 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 14:57:05 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

/*int main()
{
    char c = 'b';
    int n;
    int p;
    
    n = ft_isalpha(c);
    p = isalpha(c);
    printf("%d", n);
    printf("%d", p);

    return (0);
}*/