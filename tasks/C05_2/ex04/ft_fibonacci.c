int	ft_fibonacci(int index);

int	ft_recurring(int a, int b, int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_recurring(0, 1, index));
}

int	ft_recurring(int a, int b, int index)
{
	int	temp;

	if (index > 0)
	{
		temp = a + b;
		a = b;
		b = temp;
		index--;
	}
	else
		return (a);
	return (ft_recurring(a, b, index));
}
