int	ft_str_is_uppercase(char *str);
int	ft_str_is_uppercase(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		if (ch != 32)
		{
			if (!(ch >= 'A' && ch <= 'Z'))
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
