/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevaud <ldevaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:25:33 by ldevaud           #+#    #+#             */
/*   Updated: 2022/10/26 09:25:36 by ldevaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_line(char *save)
{
	int		i;
	char	*str;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		str[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		str[i] = save[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_save(char *save)
{
	int		i;
	int		pos;
	char	*str;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (gnl_strlen(save) - i + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	i++;
	pos = 0;
	while (save[i])
		str[pos++] = save[i++];
	str[pos] = '\0';
	free(save);
	return (str);
}

char	*ft_read_save(int fd, char *save)
{
	char	*buff;
	int		num_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	num_bytes = 1;
	while (!gnl_strchr(save, '\n') && num_bytes != 0)
	{
		num_bytes = read(fd, buff, BUFFER_SIZE);
		if (num_bytes == -1)
		{
			free(buff);
			free(save);
			return (NULL);
		}
		buff[num_bytes] = '\0';
		save = gnl_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = ft_read_save(fd, save);
	if (!save)
		return (NULL);
	line = ft_line(save);
	save = ft_save(save);
	return (line);
}