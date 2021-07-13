int	ft_str_is_lowercase(char *str);
int	ft_str_is_lowercase(char *str)
{
	char	ch;

	ch = *str;
	while (ch != '\0')
	{
		if (ch != 32)
		{
			if (!(ch >= 'a' && ch <= 'z'))
			{
				return (0);
			}
		}
		ch = *++str;
	}
	return (1);
}
