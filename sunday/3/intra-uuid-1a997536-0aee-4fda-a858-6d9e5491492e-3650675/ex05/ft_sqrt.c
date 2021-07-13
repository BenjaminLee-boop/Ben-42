int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while (n * n <= nb && n < 46341 )
	{
		n++;
		if (n * n == nb)
			return (n);
	}
	return (0 );
}
