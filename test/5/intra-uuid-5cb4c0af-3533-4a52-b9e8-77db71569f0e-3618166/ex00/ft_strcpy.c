char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
