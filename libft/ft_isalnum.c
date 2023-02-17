/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 18:00:13 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 14:56:47 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*int main()
{
	char c = 'u';
	int n;
	int b;

	n = ft_isalnum(c);
	b = isalnum(c);

	printf("%s  %c %d", "ft_isalnum", c, n);
	printf("%c", '\n');
	printf("%s %c %d\n", "isalnum", c, b);
	
	return (0);
}*/