int	ft_str_is_alpha(char *str);
int	ft_str_is_alpha(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		printf("%c", ch);
		if (ch != 32)
		{
			if (ch <= 64 || ch >= 123)
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
