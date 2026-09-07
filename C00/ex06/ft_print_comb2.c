#include <unistd.h>

void	ft_write_nbr(int n)
{
	char	d;

	d = '0' + (n / 10);
	write(1, &d, 1);
	d = '0' + (n % 10);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_nbr(a);
			write(1, " ", 1);
			ft_write_nbr(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
