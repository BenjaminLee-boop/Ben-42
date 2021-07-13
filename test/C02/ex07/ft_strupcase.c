char	*ft_strupcase(char *str);
char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 || str[index] <= 122 && str[index] != 32)
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
