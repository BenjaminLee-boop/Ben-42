int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] != s2[counter])
		{
			return (counter);
		}
		counter++;
	}
	return (counter);
}
