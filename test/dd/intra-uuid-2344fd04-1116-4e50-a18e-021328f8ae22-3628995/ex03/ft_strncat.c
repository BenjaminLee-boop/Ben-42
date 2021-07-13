char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen_ft(char *src);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen_ft(dest);
	while (*src != '\0' && nb--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}

int	ft_strlen_ft(char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (counter);
}
