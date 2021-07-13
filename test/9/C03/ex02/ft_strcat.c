char	*ft_strcat(char *dest, char *src);
int		*ft_strlen(char *src);

char	*ft_strcat(char *dest, char *src)
{
	int		strLen;
	char	*chPointer;

	chPointer = dest + strLen;
	strLen = *ft_strlen(src);
	while (*src != '\0')
	{
		*chPointer++ = *src++;
	}
	*chPointer = '\0';
	return (dest);
}

int	*ft_strlen(char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (&counter);
}
