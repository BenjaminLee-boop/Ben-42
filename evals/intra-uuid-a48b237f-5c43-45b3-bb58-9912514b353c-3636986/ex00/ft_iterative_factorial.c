#include <stdio.h>
int	ft_iterative_factorial(int nb);

int main () 
{
	int  x  = ft_iterative_factorial(7);
	printf("%i", x);
}

int	ft_iterative_factorial(int nb)
{
	int	sumfac;

	sumfac = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		sumfac = sumfac * nb;
		nb--;
	}
	return (sumfac);
}
