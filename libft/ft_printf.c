/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:39:32 by ldevaud           #+#    #+#             */
/*   Updated: 2023/02/01 10:28:23 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_type_argument(va_list arg, const char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstr_printf(va_arg(arg, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_printf(va_arg(arg, int)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(arg, unsigned long long int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_x(va_arg(arg, unsigned int), format));
	else if (format == 'u')
		return (ft_putnbr_u(va_arg(arg, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_type_argument(arg, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
