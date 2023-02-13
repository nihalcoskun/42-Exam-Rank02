#include <unistd.h>

void	first_word(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] == ' ' || str[idx] == '\t')
		idx++;
	while (str[idx] != '\0' && (str[idx] != ' ' && str[idx] != '\t'))
	{
		write(1,&str[idx], 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1,"\n", 1);
	return (0);
}