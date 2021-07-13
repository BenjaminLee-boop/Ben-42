int	ft_str_is_numeric(char *str);
int	ft_str_is_numeric(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		if (ch != 32)
		{
			if (!(ch >= '0' && ch <= '9'))
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
