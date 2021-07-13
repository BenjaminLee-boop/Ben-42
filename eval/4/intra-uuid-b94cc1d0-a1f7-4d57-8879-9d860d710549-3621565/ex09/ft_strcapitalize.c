int	isAny(char c, const char *comp)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (comp[size] != '\0')
		size++;
	while (j < size)
	{
		if (c == comp[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (isAny(str[i], " -+"))
		{
			capitalize = 1;
			i++;
			continue ;
		}
		if (capitalize)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			capitalize = 0;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		i++;
	}
	return (str);
}
