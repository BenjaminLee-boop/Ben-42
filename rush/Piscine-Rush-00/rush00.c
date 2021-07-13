#include <unistd.h>
void	ft_putchar(char ch);

void	ft_genX(int x)
{
	int	h;
	int	c;

	c = 0;
	h = x - 2;
	if (h >= 1 || x == 1 || h == 0)
	{
		ft_putchar(111);
	}
	while (c < h)
	{
		ft_putchar(45);
		c++;
	}	
	if (x > 1)
	{
		ft_putchar(111);
	}
	ft_putchar(10);
}

void	ft_genY(int x)
{
	int	h;
	int	c;

	c = 0;
	h = x - 2;
	ft_putchar(124);
	while (c < h)
	{
		ft_putchar(32);
		c++;
	}
	if (x > 1)
	{
		ft_putchar(124);
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	counter;

	counter = 0;
	ft_genX(x);
	if (y == 2)
	{
		ft_genX(x);
	}
	else if (y > 2)
	{
		while (counter < y - 2)
		{
			ft_genY(x);
			counter++;
		}
		ft_genX(x);
	}
}
