void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	temp;

	min = 0;
	max = size - 1;
	while (min < size / 2)
	{
		temp = tab[min];
		tab[min] = tab[max];
		tab[max] = temp;
		min++;
		max--;
	}
}
