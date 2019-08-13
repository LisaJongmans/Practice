#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int count, char** substance)
{
	if((count < 2) || (count > 3))
	{
		write(1, "Nope\n", 5);
		return (0);
	}
	if(count == 3)
		write(1, "These are the two arguments: ", 29);
	ft_putstr(substance[1]);
	if(count == 3)
	{
		write(1, " ", 1);
		ft_putstr(substance[2]);
	}
	write(1, "\n", 1);
	return (0);
}
