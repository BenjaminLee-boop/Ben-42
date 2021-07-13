#include "ft_functions.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_print_str("File name missing.");
	}
	else if (argc > 2)
	{
		ft_print_str("Too many arguments.");
	}
	else
	{
		ft_open_file(argv[1]);
	}
}
