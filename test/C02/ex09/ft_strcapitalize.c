char    *ft_strcapitalize(char *str);
char    *ft_strcapitalize(char *str)
{
	int     i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			str[i] = str[i] - 32;
		}
		if (str[i - 1] == 32 || str[i - 1] == 43 || str[i - 1] == 45)
		{
			if (str[i] >= 97 || str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
