#include <stdlib.h>

long long	ft_strlen(char *str)
{
	long long	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*ret_array;
	char		*temporary_array;
	long long	strs_len;
	int			i;

	strs_len = 0;
	i = 0;
	if (!size)
	{
		ret_array = ((char *)malloc(1));
		ret_array[0] = 0;
		return (ret_array);
	}
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret_array = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temporary_array = ft_strcat(ret_array, strs[0]);
	i = 1;
	while (i < size)
	{
		temporary_array = ft_strcat(temporary_array, sep);
		temporary_array = ft_strcat(temporary_array, strs[i++]);
	}
	*temporary_array = 0;
	return (ret_array);
}
