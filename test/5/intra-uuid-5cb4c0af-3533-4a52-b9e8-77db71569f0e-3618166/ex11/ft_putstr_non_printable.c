#include <unistd.h>

int	str_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_str(char *str, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}

void	dec_to_hex(char *str, int n)
{
	int	i;
	int	mod;

	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	i = 0;
	while (n > 15)
	{
		mod = n % 16;
		n /= 16;
		str[i] = mod;
		i++;
	}
	str[i] = n;
	rev_str(str, str_size(str));
}

void	print_hex(int n)
{
	char	str[33];
	int		i;

	dec_to_hex(str, n);
	write(1, "\\", 1);
	if (str_size(str) < 2)
		write(1, "0", 1);
	i = 0;
	while (str[i])
	{
		if (str[i] < 10)
			str[i] += '0';
		else
			str[i] += 'a' - 10;
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			print_hex(str[i]);
		i++;
	}
}
