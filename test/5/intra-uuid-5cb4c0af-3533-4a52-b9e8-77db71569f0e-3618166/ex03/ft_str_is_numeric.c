int	ft_str_is_numeric(char *str)
{
	int	i;
	int	d;

	i = 0;
	while (str[i])
	{
		d = str[i];
		if (!(d >= '0' && d <= '9'))
			return (0);
		i++;
	}
	return (1);
}	
