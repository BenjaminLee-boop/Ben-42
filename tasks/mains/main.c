#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int main()
{
	char atioooo[] = "---+--+1234";
	char stringssss[] = "Hello, Wolrd!";
	printf("C04 Main\n\n");
	printf("StrLen\n");
	int x = ft_strlen(stringssss);
	printf("The Length is:\t%i\n\n", x);
	printf("FT_PUTSTR:\t\n");
	ft_putstr(stringssss);
	printf("\n\nputnbr\n");
	ft_putnbr(-2147483648);
	printf("\n\nFT_ATOI\n");
	printf("%i\n\n", ft_atoi(atioooo));
	printf("%i", atoi(atioooo));

	return (0);
}