#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int x;

	x = 0;
	if (ac == 2)
	{
		j = 0;
		i = 0;
		while (av[1][i] == ' ')
			i++;
		while (av[1][i] && av[1][i] != ' ')
		{
			printf("%c", av[1][i]);
			i++;
		}
		x++;
	}
	printf("\n%d", x);
}
