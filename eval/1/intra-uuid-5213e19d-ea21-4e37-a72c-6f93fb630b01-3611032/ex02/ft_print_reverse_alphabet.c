#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = '{';
	while (i-- > 'a')
	{
		write(1, &i, 1);
	}
}
