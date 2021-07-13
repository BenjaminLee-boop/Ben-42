void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	currentIndex;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			currentIndex = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = currentIndex;
			count = 0;
		}
		else
			count++;
	}
}
