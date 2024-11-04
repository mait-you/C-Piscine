#include <stdio.h>

int main(int ac, char *av[])
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] < 'Z') || (av[1][i] >= 'a' && av[1][i] < 'z'))
				printf("%c", av[1][i] + 1);
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
				printf("%c", av[1][i] - 25);
			else
				printf("%c", av[1][i]);
			i++;
		}
	}
}
