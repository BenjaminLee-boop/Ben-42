#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = '`';
	while (i++ < 'z')
	{
		write(1, &i, 1);
	}
}
