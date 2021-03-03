#include <stdio.h>
#include <stdlib.h>

void	printnbr(int n, int fd)
{
	if(n >= 10)
		printnbr(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);

}

void	ft_putnbr_fd(int n, int fd)
{
	int		x;

	x = n;
	if(x < 0)
	{
		ft_putchar_fd('-');
		x = -x;
	}
	printnbr(x, fd);
}
