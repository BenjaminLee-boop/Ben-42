#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *str1, char *str2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);


int main(void)
{
	char strCpr1[] = "Hello, World";
	char strCpr2[] = "Hello, World";
	char strCpr3[] = "Hello World";
	char strcat1[] = "world";
	char strcat2[] = "World";
	char strstr1[] = "Techie Delight - Ace the Technical Interviews";
    char strstr2[] = "Ace";
	unsigned int x;
	unsigned int a;
	x = 5;
	a = 15;
	char strncopydest[50] = "This is source";
	char *strncopysrc = "This is destination";
	char strncopydest2[50] = "This is source";
	char *strncopysrc2 = "This is destination";

	printf("################## ft_strcmp Passing Test##################");
	printf("\n#\t %s \n#\t %s \t\t %d \n",strCpr1, strCpr3 ,ft_strcmp(strCpr1, strCpr2));
	printf("################## ft_strcmp Failing Test##################");
	printf("\n#\t %s \n#\t %s \t\t %d \n",strCpr1, strCpr3 ,ft_strcmp(strCpr1, strCpr3));
	printf("################## ft_strncmp Passing Test##################");
	printf("\n#\t%i\t%s\t%s" , ft_strncmp(strCpr1, strCpr2, x) , strCpr1, strCpr2);
	printf("\n#\t%i\t%s\t%s \n" , ft_strncmp(strCpr1, strCpr3, x) , strCpr1, strCpr3);
	printf("################## ft_strcat ######################");
	printf("\n#\t %s\n",ft_strcat(strcat1,strcat2));
	printf("################## ft_strncat ######################");
	strncat(strncopydest, strncopysrc, a);
	ft_strncat(strncopydest2, strncopysrc2, a);
	printf("\n#\t%s" ,strncopydest );
	printf("\n#\t%s \n" , strncopydest2);

}