/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:11:12 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 14:58:16 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
{
	int v1 = ' ';

	if (ft_isprint(v1))
	{
		printf("%d is printable", v1);
	}
	else
	{
		printf("%d is not printable", v1 );
	}

	return (0);
}*/
