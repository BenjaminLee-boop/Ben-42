#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*returnn;
	int	i;

	i = 0;
	if (min >= max)
	{
		returnn = NULL;
		return (0);
	}
	returnn = malloc(sizeof(int) * (max - min));
	if (!returnn)
	{
		return (-1);
	}
	while (min < max)
	{
		returnn[i] = min;
		i++;
		min++;
	}
	*range = returnn;
	return (i);
}
