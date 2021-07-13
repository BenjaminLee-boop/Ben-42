int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	d;

	i = 0;
	while (str[i])
	{
		d = str[i];
		if (!(d >= 'A' && d <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}	
