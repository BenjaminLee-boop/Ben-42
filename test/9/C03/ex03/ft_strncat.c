char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		count;
	char	*p;

	i = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (count < nb)
	{
		*dest++ = *src++;
		count++;
	}
	*dest = '\0';
	return (p);
}
