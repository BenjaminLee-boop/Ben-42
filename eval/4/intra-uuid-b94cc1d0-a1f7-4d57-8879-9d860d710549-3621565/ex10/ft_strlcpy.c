unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (src[length++] != '\0')
		;
	if (size == 0)
		return (length);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (length);
}
