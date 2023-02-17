/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:00:45 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 13:24:48 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result *= sign;
	return (result);
}

/*int main()
{
	char	s[4] = "+-54";
	int n;
	int p;
	
	n = ft_atoi(s);
	p = atoi(s);
	printf("%d", n);
	printf("%c",'\n');
	printf("%d",p);
	return (0);
}*/
