#include <unistd.h>

static void	ft_write_digit(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr_long(long n)
{
	if (n >= 10)
		ft_putnbr_long(n / 10);
	ft_write_digit('0' + n % 10);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_write_digit('-');
		n = -n;
	}
	ft_putnbr_long(n);
}
