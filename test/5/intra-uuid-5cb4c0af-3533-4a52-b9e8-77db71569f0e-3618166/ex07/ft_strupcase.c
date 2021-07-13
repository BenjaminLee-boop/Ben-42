char	*ft_strupcase(char *str)
{
	int	i;
	int	d;

	i = 0;
	while (str[i])
	{
		d = str[i];
		if (d >= 'a' && d <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}	
