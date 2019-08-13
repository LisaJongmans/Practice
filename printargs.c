#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}

int	main(int count, char** substance)
{
	int i = 1;
	/* char j = '1'; */

	if(count == 1)
	{
		write(1, "Nope\n", 5);
		return (0);
	}
	while (i < count)
	{
		write(1, "This is argument ", 17);
		ft_putnbr(i);
		write(1, ": ", 2);
		ft_putstr(substance[i]);
		i++;
	}
	return (0);
}
