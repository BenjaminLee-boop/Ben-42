void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	float	result;
	float	m;

	m = a % b;
	result = a / b;
	*div = result;
	*mod = m;
}
