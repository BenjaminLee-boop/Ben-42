int	ft_recursive_factorial(int nb);

int	ft_handler(int fac, int num);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_handler(1, nb));
}

int	ft_handler(int fac, int num)
{
	fac = fac * num--;
	if (num > 0)
		return (ft_handler(fac, num));
	return (fac);
}
