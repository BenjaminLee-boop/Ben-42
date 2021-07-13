int	ft_str_is_lowercase(char *str);
int	ft_str_is_lowercase(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		printf("%c", ch);
		if (ch != 32)
		{
			if (ch <= 93 || ch >= 123)
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
