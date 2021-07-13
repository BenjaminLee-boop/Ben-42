#include <stdio.h>
int	ft_str_is_numeric(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strupcase(char *str);


int main(void)
{
	char ft_strcpy1[] = "ZuaacrYmYQSXWwMMvfNmIyPfOQGqMYnLaFS";
	char ft_strcpy2[] = "MjagbWCjhuLVSPSFQNSltfPTV";
	char ft_strcpy3[] = "FLnbuDbftVrkCfGxZAapVVLQMeCKgVXQqEPmFrQ";
	char ft_strcpy_array[50];
	char ft_strncpy1[] = "ZuaacrYmYQSXWwMMvfNmIyPfOQGqMYnLaFS";
	char ft_strncpy2[] = "MjagbWCjhuLVSPSFQNSltfPTV";
	char ft_strncpy3[] = "FLnbuDbftVrkCfGxZAapVVLQMeCKgVXQqEPmFrQ";
	char ft_str_is_alpha1[] = "FLnbuDbftVrkCfGxZAapVVLQMeCKgVXQqEPmFrQ";
	char ft_str_is_alpha2[] = "~!@#$^&*()_+{}|:<>?,./;[]";
	char ft_str_is_number[] = "1234567890";
	char ft_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ft_lower[] = "abcdefghijklmnopqrstuvwxyz";
	char ft_strncpy_array[100];
	unsigned int strnCounter = 5;

	printf("************ ft_strcpy ************\n\n");
	ft_strcpy(ft_strcpy_array, ft_strcpy1);
	printf("%s\n%s\n\n",ft_strcpy_array,ft_strcpy1);
	ft_strcpy(ft_strcpy_array, ft_strcpy2);
	printf("%s\n%s\n\n",ft_strcpy_array,ft_strcpy2);
	ft_strcpy(ft_strcpy_array, ft_strcpy3);
	printf("%s\n%s\n\n",ft_strcpy_array,ft_strcpy3);



	printf("************ ft_str_is_alpha ************\n\n");
	ft_strncpy(ft_strncpy_array, ft_strncpy1, strnCounter);
	printf("%s\n%s\n\n",ft_strncpy_array,ft_strncpy1);
	ft_strncpy(ft_strncpy_array, ft_strncpy2,strnCounter);
	printf("%s\n%s\n\n",ft_strncpy_array,ft_strncpy2);
	ft_strncpy(ft_strncpy_array, ft_strncpy3, strnCounter);
	printf("%s\n%s\n\n",ft_strncpy_array,ft_strncpy3);

	printf("************ ft_strcpy ************\n\n");
	printf("%s\n%d\n\n",ft_str_is_alpha1,ft_str_is_alpha(ft_str_is_alpha1));
	printf("%s\n%d\n\n",ft_str_is_alpha2,ft_str_is_alpha(ft_str_is_alpha2));


	printf("************ ft_str_is_numeric ************\n\n");
	printf("%s\n%d\n\n",ft_str_is_alpha1,ft_str_is_numeric(ft_str_is_alpha1));
	printf("%s\n%d\n\n",ft_str_is_alpha2,ft_str_is_numeric(ft_str_is_alpha2));
	printf("%s\n%d\n\n",ft_str_is_number,ft_str_is_numeric(ft_str_is_number));

	printf("************ ft_str_is_lowercase ************\n\n");
	printf("%s\n%d\n\n",ft_upper,ft_str_is_lowercase(ft_upper));
	printf("%s\n%d\n\n",ft_str_is_number,ft_str_is_lowercase(ft_str_is_number));
	printf("%s\n%d\n\n",ft_lower,ft_str_is_lowercase(ft_lower));
	

	printf("************ ft_str_is_uppercase ************\n\n");
	printf("%s\n%d\n\n",ft_str_is_number,ft_str_is_uppercase(ft_str_is_number));
	printf("%s\n%d\n\n",ft_lower,ft_str_is_uppercase(ft_lower));
	printf("%s\n%d\n\n",ft_upper,ft_str_is_uppercase(ft_upper));	

	printf("************ ft_str_is_uppercase ************\n\n");
	printf("%s\n%s\n\n",ft_upper,ft_strupcase(ft_upper));	

	printf("************ ft_str_is_uppercase ************\n\n");
	printf("%s\n%s\n\n",ft_lower,ft_strlowcase(ft_lower));

	return (0);
}