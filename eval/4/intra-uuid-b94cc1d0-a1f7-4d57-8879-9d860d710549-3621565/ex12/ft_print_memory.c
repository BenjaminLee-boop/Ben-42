#include <unistd.h>

char	toHex(int num)
{
	if (num < 10)
		return (num + '0');
	if (num < 16)
		return ((num % 10) + 'a');
	return ('\0');
}

void	printAddress(void *addr)
{
	unsigned int	temp;
	char			arr[16];
	int				i;
	int				numToHex;

	i = 15;
	temp = (unsigned int)(&(addr[0]));
	while (i >= 0)
	{
		numToHex = temp % 16;
		arr[i] = toHex(numToHex);
		temp /= 16;
		i--;
	}
	arr[7] = '1';
	write(1, arr, 16);
	write(1, ": ", 2);
}

void	printHexes(void *addr)
{
	char	arr[40];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 40)
	{
		arr[i] = toHex((((int *)addr)[j]) / 16);
		i++;
		arr[i] = toHex((((int *)addr)[j]) % 16);
		j++;
		i++;
		arr[i] = toHex((((int *)addr)[j]) / 16);
		i++;
		arr[i] = toHex((((int *)addr)[j]) % 16);
		i++;
		j++;
	}
	write(1, arr, 40);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size <= 0)
		return (addr);
	printAddress(addr);
	printHexes(addr);
	return (addr);
}
