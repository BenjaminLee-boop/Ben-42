int	ft_str_is_numeric(char *str);
int	ft_str_is_numeric(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		printf("%c", ch);
		if (ch != 32)
		{
			if (ch <= 47 || ch >= 58)
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
