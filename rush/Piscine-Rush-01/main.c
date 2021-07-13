#include <stdio.h>
#include <stdlib.h>

int ft_printArr(int x[6][6]);
int checkTop(int x[6][6]);
int checkr(int x[6][6]);
int checkBottom(int x[6][6]);
int checkl(int x[6][6]);


int main() 
{
	int dataArry[6][6] = {
		{0,4,3,2,1,0},
		{1,0,0,0,0,2},
		{2,0,0,0,0,2},
		{4,0,0,0,0,3},
		{2,0,0,0,0,1},
		{0,1,2,2,2,0}
	};

	//checkTop(dataArry);
	//checkr(dataArry);
	checkBottom(dataArry);
	//checkl(dataArry);
	ft_printArr(dataArry);
}

int ft_printArr(int x[6][6])
{
	int tC = 1;
	int a = 1;
	int b = 1;
	int c = 1;

	while (tC <= 4)
	{
		printf("%i ", x[1][tC]);
		tC++;
	}
	printf("\n");
	while (a <= 4)
	{
		printf("%i ", x[2][a]);
		a++;
	}
	printf("\n");
	while (b <= 4)
	{
		printf("%i ", x[3][b]);
		b++;
	}
	printf("\n");
	while (c <= 4)
	{
		printf("%i ", x[4][c]);
		c++;
	}
	printf("\n");
	return (0);
	
}

int checkr(int x[6][6])
{
	int c = 0;

	while (c <= 5)
	{
		if (x[c][5] == 1)
	{
		x[c][4] = 4;
	}
		c++;
	}
	return (0);
}

int checkl(int x[6][6])
{
	int c = 0;

	while (c <= 5)
	{
		if (x[c][0] == 1)
	{
		x[c][1] = 4;
	}
		c++;
	}
	return (0);
}


int checkTop(int x[6][6])
{
	int c = 0;

	while (c <= 5)
	{
		if (x[0][c] == 1)
	{
		x[1][c] = 4;
	}
		c++;
	}
	return (0);
}

int checkBottom(int x[6][6])
{
	int c = 0;

	while (c <= 5)
	{
		if (x[5][c] == 1 && x[0][c] == 4)
	{
		x[4][c] = 4;
	}
		c++;
	}
	return (0);
}
