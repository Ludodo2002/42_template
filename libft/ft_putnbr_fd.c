/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:54:01 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/10 13:01:55 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr *= -1);
	return (nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		is_neg;
	int		length;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		write(fd, &str[length--], 1);
}

/*int main(void)
{
	int n = 788;
    int fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/
