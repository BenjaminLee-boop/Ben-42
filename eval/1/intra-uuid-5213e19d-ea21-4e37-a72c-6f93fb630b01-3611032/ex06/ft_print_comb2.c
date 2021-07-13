#include <unistd.h>

void	ft_printer(int set1, int set2);

void	ft_print_comb2(void)
{
	int	set1;
	int	set2;

	set1 = 0;
	while (set1 <= 98)
	{
		set2 = set1 + 1;
		while (set2 <= 99)
		{
			ft_printer(set1, set2);
			set2++;
		}
		set1++;
	}
}

void	ft_printer(int set1, int set2)
{
	char	charray[6];

	charray[0] = ((set1 / 10) + '0');
	charray[1] = ((set1 % 10) + '0');
	charray[2] = ' ';
	charray[3] = ((set2 / 10) + '0');
	charray[4] = ((set2 % 10) + '0');
	charray[5] = ',';
	write(1, &charray, 5);
	if (set1 == 98 && set2 == 99)
	{
	}
	else
	{
		write(1, &charray[5], 1);
		write(1, &charray[2], 1);
	}	
}

int main(void)
{
	ft_print_comb2();
}
