#include <unistd.h>
#include <fcntl.h>

void	ft_print_str(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

void	ft_open_file(char *str)
{
	char	fd1;
	char	ch;

	fd1 = open(str, O_RDONLY);
	if (fd1 < 0)
	{
		ft_print_str("Cannot read file.");
		return ;
	}
	while (read(fd1, &ch, 1))
	{
		write(1, &ch, 1);
	}
	close(fd1);
}
