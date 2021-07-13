int	ft_str_is_uppercase(char *str);
int	ft_str_is_uppercase(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		printf("%c", ch);
		if (ch != 32)
		{
			if (ch <= 64 || ch >= 91)
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
