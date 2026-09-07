#include <unistd.h>

static void	ft_write_digit(int nb)
{
	char	c;

	c = '0' + nb;
	write(1, &c, 1);
}

static int	is_last_comb(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (comb[i] != 10 - n + i)
			return (0);
		i++;
	}
	return (1);
}

static void	ft_rec(int *comb, int idx, int n, int start)
{
	int	i;

	if (idx == n)
	{
		i = 0;
		while (i < n)
		{
			ft_write_digit(comb[i]);
			i++;
		}
		if (!is_last_comb(comb, n))
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= 9 - (n - idx - 1))
	{
		comb[idx] = i;
		ft_rec(comb, idx + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[9];

	if (n > 0 && n < 10)
		ft_rec(comb, 0, n, 0);
}
