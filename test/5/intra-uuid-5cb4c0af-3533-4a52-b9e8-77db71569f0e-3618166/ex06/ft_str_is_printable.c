int	ft_str_is_printable(char *str)
{
	int	i;
	int	d;

	i = 0;
	while (str[i])
	{
		d = str[i];
		if (d < 32 || d > 126)
			return (0);
		i++;
	}
	return (1);
}	
