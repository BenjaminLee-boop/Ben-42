int	char_type(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (3);
	return (0);
}

void	adjust_char(char *c, int *next)
{
	int	ctype;

	ctype = char_type(*c);
	if (ctype == 0)
		*next = 1;
	else if (ctype == 1)
		*next = 0;
	else if (ctype == 2)
	{
		if (*next == 1)
			*c -= 32;
		*next = 0;
	}
	else
	{	
		if (*next == 0)
			*c += 32;
		*next = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i])
	{
		adjust_char(&str[i], &next);
		i++;
	}
	return (str);
}
