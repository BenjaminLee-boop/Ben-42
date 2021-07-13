int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	char	ch;
	int		counter;

	ch = *str;
	counter = 0;
	while (ch != '\0')
	{
		ch = *++str;
		counter++;
	}
	return (counter);
}
