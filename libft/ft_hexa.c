/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:15 by ldevaud           #+#    #+#             */
/*   Updated: 2023/02/01 10:28:08 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hexa_len(unsigned long long int n)
{
	size_t	len;

	len = (n == 0);
	while (n)
	{
		n /= 16;
		len ++;
	}
	return (len);
}

void	ft_print_lower(unsigned long long int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 15)
	{
		ft_print_lower(n / 16);
	}
	ft_putchar(base[n % 16]);
}

void	ft_hexa_capital(unsigned long long int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexa_capital(n / 16);
	}
	ft_putchar(base[n % 16]);
}

size_t	ft_print_x(unsigned int n, char c)
{
	if (c == 'x')
		ft_print_lower(n);
	if (c == 'X')
		ft_hexa_capital(n);
	return (ft_hexa_len(n));
}

size_t	ft_print_ptr(unsigned long long int nb)
{	
	if (nb == 0)
		return (ft_putstr_printf("0x0"));
	write(1, "0x0", 2);
	ft_print_lower(nb);
	return (ft_hexa_len(nb) + 2);
}
