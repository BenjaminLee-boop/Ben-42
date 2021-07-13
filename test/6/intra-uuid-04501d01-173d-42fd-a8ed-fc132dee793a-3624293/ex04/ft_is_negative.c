#include <unistd.h>

void	ft_is_negative(int	n)
{
	char	N;
	char	P;
	int		n;

	N = 'N';
	P = 'P';
	n = 1;
	{
		if (n >= 0)
		{
			write (1, &P, 1);
		}
		if (n < 0)
		{
			write (1, &N, 1);
		}
	}
}
