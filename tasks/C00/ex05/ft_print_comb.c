#include <unistd.h>

void	ft_print_comb(void);
void	ft_write_combo(int a, int b, int c );

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				ft_write_combo(x, y, z);
				z++;
			}
			z = ++y + 1;
		}
		y = ++x;
	}
}

void	ft_write_combo(int a, int b, int c)
{
	int	p;
	int	o;

	p = ' ';
	o = ',';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' )
	{
		write(1, &o, 1);
	}
	write(1, &p, 1);
}
