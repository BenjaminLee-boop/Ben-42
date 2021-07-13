void	initArray(char arr[])
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (i < 26)
	{
		arr[i] = c;
		c++;
		i++;
	}
	c = 'A';
	while (i < 52)
	{
		arr[i] = c;
		c++;
		i++;
	}	
}

int	checkAlphabet(char c)
{
	char	arr[52];
	int		j;

	initArray(arr);
	j = 0;
	while (j < 52)
	{
		if (c == arr[j])
			break ;
		j++;
		if (j == 52)
			return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!checkAlphabet(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}