/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secondaires.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:44 by ldevaud           #+#    #+#             */
/*   Updated: 2023/02/01 10:28:28 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lennbr(long nbr)
{
	long	len;

	len = 0;
	if (nbr == 0)
		len++;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr %= 10;
		ft_putchar(nbr + '0');
	}
}
