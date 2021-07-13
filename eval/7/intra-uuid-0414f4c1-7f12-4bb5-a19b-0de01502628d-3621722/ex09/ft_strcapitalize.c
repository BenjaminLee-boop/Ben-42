char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if ((str[i] >= 97) && (str[i] <= 122))
			{
				str[i] = str[i] - 32 ;
			}
		}
		else if ((((str[i - 1] < 47)
					|| ((str[i - 1] > 57) && (str[i - 1] < 65))
					|| ((str[i - 1] > 90) && (str[i - 1] < 97))
					|| (str[i - 1] > 122)))
			&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
