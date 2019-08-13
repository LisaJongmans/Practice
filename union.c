/* You get two strings, you need to cat them end to end.
 * Then you'll print them, BUT if any char appears twice in
 * the final string, you should only print the first instance 
 * of that char. For example: you get "hello there dear." 
 * and "It was the best of times.". You will cat them and 
 * then print "helo trda.Iwsbfim" */
/* Edited to take any amount of arguments bigger than 1 */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_checkdup(char *str)
{
	int i = 0;
	char a;
	int j = 0;

	while (str[i] != '\0')
	{
		a = str[i];
		j = i - 1;
		while (j >= 0 && a != str[j])
			j--;
		if (j == -1)
			ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcat(char *str1, char *str2)
{
	int i = 0;
	int j = 0;

	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i + j] = str2[j];
		j++;
	}
	str1[i + j] = '\0';
	return (str1);
}

int	main(int argc, char **argv)
{
	int i = 2;

	if (argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (i != argc)
	{
		argv[1] = ft_strcat(argv[1], argv[i]);
		i++;
	}
	ft_checkdup(argv[1]);
	return (0);
}
