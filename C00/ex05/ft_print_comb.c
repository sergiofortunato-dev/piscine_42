#include <unistd.h>

void	ft_write_digit(int n)
{
	char	d;

	d = '0' + n;
	write(1, &d, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write_digit(a);
				ft_write_digit(b);
				ft_write_digit(c);
				if (a != 7 || b != 8 || c != 9)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
