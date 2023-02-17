#include "libft/libft.h"
#include <fcntl.h>

int	main(void)
{
	char	*str;
	int		fd;
	int		i;

	i = 0;
	fd = open("test.txt", O_RDONLY);
	while (i < 8)
	{
		str = get_next_line(fd);
		printf("%s", str);
		i++;
	}
	printf("\n\nft_printf tester\n\n");
	ft_printf("The GNL tester printf a total of %d lines\n", i);
	return (0);
}
