/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_principales.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:24 by ldevaud           #+#    #+#             */
/*   Updated: 2023/02/01 10:28:19 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr_printf(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_putnbr_printf(int nbr)
{
	ft_putnbr(nbr);
	return (ft_lennbr(nbr));
}

void	ft_putnbr_unsigned_int(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr_unsigned_int(nbr / 10);
		nbr %= 10;
	}
	ft_putchar(nbr + 48);
}

size_t	ft_putnbr_u(unsigned int nbr)
{
	ft_putnbr_unsigned_int(nbr);
	return (ft_lennbr(nbr));
}
