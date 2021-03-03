#include <stdio.h>
#include <stdlib.h>

void ft_putstr_fd(char *s, int fd)
{
	if(!s)
		return (0);
	write(fd, &s, ft_strlen(s));
}
