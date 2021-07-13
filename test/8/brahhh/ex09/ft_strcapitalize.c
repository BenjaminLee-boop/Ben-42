char	*ft_lowercase(char *str);
char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowercase(str);
	while (str[i])
	{
		if (i == 0)
		{
			str[i] = str[i] - 32;
		}
		if (str[i] != 32 && str[i + 1] != 32 && str[i - 1] != 32)
		{
			if (str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45)
			{
				if (str[i] >= 97 || str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}

char	*ft_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z' && str[index] != 32)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
