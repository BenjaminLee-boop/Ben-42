#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define SUCCESS 0
# define FALSE 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
typedef int	t_bool;

int	EVEN(int x)
{
	return (x % 2 == 0);
}
#endif