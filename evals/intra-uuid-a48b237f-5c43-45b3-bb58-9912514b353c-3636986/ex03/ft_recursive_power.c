int	ft_recursive_power(int nb, int power);

int	ft_handler(int og, int num, int pow);

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (nb < 0 && power == 0)
		return (-1);
	else
		return (ft_handler(nb, nb, power));
}

int	ft_handler(int og, int nb, int power)
{
	nb = og * nb;
	power--;
	if (power > 1)
		return (ft_handler(og, nb, power));
	if (og < 0 && nb > 0)
		return (-nb);
	return (nb);
}
