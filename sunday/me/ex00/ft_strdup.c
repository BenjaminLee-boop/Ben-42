#include <stdlib.h>
int	ft_str_len(char *str);

char	*ft_strdup(char *src)
{
	int		o_size;
	char	*dup;
	char	*d_offset;

	o_size = ft_str_len(src);
	dup = (char *)malloc(sizeof(char) * o_size + 1);
	if (dup == NULL)
	{
		return ((char *) NULL);
	}
	d_offset = dup;
	while (*src)
	{
		*d_offset = *src;
		d_offset++;
		src++;
	}
	*d_offset = '\0';
	return (dup);
}

int	ft_str_len(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}
