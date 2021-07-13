char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			while (j < (n - i))
			{
				dest[i] = '\0';
				j++;
				i++;
			}
			return (dest);
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}