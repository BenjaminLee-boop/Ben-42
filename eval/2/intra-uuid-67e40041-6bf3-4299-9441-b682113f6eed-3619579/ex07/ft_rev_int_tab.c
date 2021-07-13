#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while
	(i < size);
	{
		a = tab[i];
		tab [i] = tab [size - 1];
		tab [size - 1] = a;
		size--;
		i++;
	}
}
