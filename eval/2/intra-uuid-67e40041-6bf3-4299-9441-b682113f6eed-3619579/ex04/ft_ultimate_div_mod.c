#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a / *b;
	div = *a % *b;
	*a = mod;
	*b = div;
}
