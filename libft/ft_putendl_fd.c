/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:54:08 by ldevaud           #+#    #+#             */
/*   Updated: 2022/08/14 15:02:22 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}

/*int main(void)
{
	char *s = "Hola";
    int fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}*/