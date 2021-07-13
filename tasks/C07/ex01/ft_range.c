#include <stdlib.h>
int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	i;
	int	*x;

	i = 0;
	x = malloc(sizeof(int) * (max - min));
	if (x == NULL)
	{
		return (NULL);
	}
	if (min >= max)
	{
		x = NULL;
	}
	while (max > min)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}
