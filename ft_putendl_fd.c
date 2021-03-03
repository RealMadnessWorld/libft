#include <stdio.h>
#include <stdlib.h>

void ft_putendl_fd(char *s, int fd)
{
	char endl;

	endl = '\n';
	write(fd, &s, ft_strlen(s));
	write(fd, &endl, 1);
}
