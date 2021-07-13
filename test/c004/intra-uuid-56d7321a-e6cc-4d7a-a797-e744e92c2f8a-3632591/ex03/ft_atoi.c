int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	res;
	int	idx;

	idx = 0;
	res = 0;
	while (str[idx] != '\0')
	{
		res = res * 10 + str[idx] - '0';
		++idx;
	}
	return (res);
}
