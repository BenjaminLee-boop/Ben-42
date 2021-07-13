void	initArray(char arr[])
{
	int		i;

	i = 0;
	while (i < 10)
	{
		arr[i] = i + '0';
		i++;
	}
}

int	checkAlphabet(char c)
{
	char	arr[52];
	int		j;

	initArray(arr);
	j = 0;
	while (j < 10)
	{
		if (c == arr[j])
			break ;
		j++;
		if (j == 10)
			return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
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
