#include <unistd.h>
#include <stdint.h>

void	print_p_addr(void *p)
{
	uintptr_t	iaddr;
	char		buf[16];
	int			i;

	i = 15;
	iaddr = (uintptr_t)p;
	while (i >= 0)
	{
		buf[i] = iaddr % 16;
		if (buf[i] < 10)
			buf[i] += '0';
		else
			buf[i] += 'a' - 10;
		iaddr /= 16;
		i--;
	}
	write(1, &buf, 16);
	write(1, ": ", 2);
}

void	print_char_hex(char *c)
{
	char			buf[2];
	int				i;
	unsigned int	n;

	n = *c;
	i = 1;
	while (i >= 0)
	{
		buf[i] = n % 16;
		if (buf[i] < 10)
			buf[i] += '0';
		else
			buf[i] += 'a' - 10;
		n /= 16;
		i--;
	}
	write(1, buf, 2);
}

void	loop_print_char_hex(char *p, int	s)
{
	int	i;

	i = 0;
	while (i < s)
	{
		print_char_hex(p);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
		p++;
	}
	i = 0;
	if (s % 2 == 1)
		write(1, " ", 1);
	while (i < 16 - s)
	{
		write(1, " ", 1);
		i++;
	}
}

void	loop_print_char(char *p, int s)
{
	int		i;

	i = 0;
	while (i < s)
	{
		if (*p > 31 && *p < 127)
			write(1, p, 1);
		else
			write(1, ".", 1);
		i++;
		p++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*p;
	int		s;

	p = (char *)addr;
	while (size > 0)
	{
		print_p_addr(p);
		if (size < 16)
			s = size;
		else
			s = 16;
		loop_print_char_hex(p, s);
		loop_print_char(p, s);
		p += s;
		write(1, "\n", 1);
		if (size > 16)
			size -= 16;
		else
			break ;
	}
	return (addr);
}
