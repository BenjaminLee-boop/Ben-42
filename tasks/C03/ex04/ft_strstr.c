char	*if_loop(char *haystack, char *needle, int j, int k)
{
	int	flag;

	flag = 0;
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[k])
		{
			while (needle[k])
			{
				if (haystack[j + k] == needle[k])
					flag = 1;
				else
				{
					flag = 0;
					k = 0;
					break ;
				}
				k++;
			}
			if (flag == 1)
				return (&haystack[j]);
		}
		j++;
	}
	return (&haystack[j]);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	if (needle[0] == '\0')
		return (haystack);
	return (if_loop(haystack, needle, j, k));
}
