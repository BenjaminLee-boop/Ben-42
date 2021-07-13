int	ft_strcmp(char *str1, char *str2)
{
	int	number;

	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		number = 0;
	}
	else
	{
		number = *str1 - *str2;
	}
	if (number == 0)
	{
		return (0);
	}
	else if (number < 0)
	{
		return (-1);
	}
	return (1);
}
