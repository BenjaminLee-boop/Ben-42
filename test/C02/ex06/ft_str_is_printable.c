int	ft_str_is_printable(char *str);
int	ft_str_is_printable(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		printf("%c", ch);
		if (ch != 32)
		{
			if (ch <= 41 || ch >= 176)
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
