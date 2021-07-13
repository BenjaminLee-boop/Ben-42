int	checkPrintable(char c)
{
	if (c < 32)
		return (0);
	return (1);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!checkPrintable(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
