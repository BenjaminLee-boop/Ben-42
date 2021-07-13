#include <unistd.h>

void	ft_putnbr(int nb);

int	ft_write_char(char s)
{
	write(1, &s, 1);
}

void	ft_putnbr(int nb)
{		
	char	ch;

	if (nb < 0)
	{
		nb = -nb;
		ft_write_char('-');
		ft_write_char(nb * 10);
	}
	if (nb < 10)
	{
		ft_write_char((char)nb + '0');
	}
	else
	{
		ft_write_char(nb / 10);
		ft_write_char((char)nb % 10 + '0');
	}
}
