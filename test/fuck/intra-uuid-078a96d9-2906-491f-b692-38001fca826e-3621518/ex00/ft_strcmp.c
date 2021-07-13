int	ft_strcmp(char *str1, char *str2);
int	ft_strcmp(char *str1, char *str2)
{
	int	count;

	count = 0;
	while (str1[count])
	{
		if (str1[count] != str2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}
