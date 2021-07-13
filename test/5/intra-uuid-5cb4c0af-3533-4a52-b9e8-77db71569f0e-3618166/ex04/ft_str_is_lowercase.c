int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	d;

	i = 0;
	while (str[i])
	{
		d = str[i];
		if (!(d >= 'a' && d <= 'z'))
			return (0);
		i++;
	}
	return (1);
}	
