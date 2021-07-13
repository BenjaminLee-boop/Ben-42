#include <unistd.h>

void	ft_write_char(char s);
void	ft_print_comb2(void);
void	ft_write_combo(int p, int o);

void	ft_write_char(char s)
{
	write(1, &s, 1);
}

void	ft_print_comb2(void)
{
	int	p;
	int	o;

	p = 00;
	o = 00;
	while (p <= 99)
	{
		o = p + 1;
		while (o <= 99)
		{
			ft_write_combo(p, o);
			o++;
		}
		p++;
	}
}

void	ft_write_combo(int p, int o)
{
	ft_write_char(p / 10 + '0');
	ft_write_char(p % 10 + '0');
	ft_write_char(' ');
	ft_write_char(o / 10 + '0');
	ft_write_char(o % 10 + '0');
	if (p != 98)
	{
		ft_write_char(',');
		ft_write_char(' ');
	}
}
