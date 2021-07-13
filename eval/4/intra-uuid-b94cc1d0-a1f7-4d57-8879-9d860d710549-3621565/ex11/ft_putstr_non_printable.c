#include <unistd.h>

char	toHex(int num)
{
	if (num < 10)
		return (num + '0');
	if (num < 16)
		return ((num % 10) + 'a');
	return ('\0');
}

void	printHex(unsigned int num)
{
	char	hex[2];

	hex[1] = toHex(num % 16);
	hex[0] = toHex(num / 16);
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			write(1, "/", 1);
			printHex(str[i]);
		}
		else
			write(1, &(str[i]), 1);
		i++;
	}
}
