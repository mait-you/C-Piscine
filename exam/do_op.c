

#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
	int x;

	x = 0;
	if (ac == 4)
	{
		if (av[2][0] == '+')
			x = atoi(av[1]) + atoi(av[3]);
		else if (av[2][0] == '-')
			x = atoi(av[1]) - atoi(av[3]);
		else if (av[2][0] == '*')
			x = atoi(av[1]) * atoi(av[3]);
		else if (av[2][0] == '/')
			x = atoi(av[1]) / atoi(av[3]);
		else
			printf("%c!!",av[2][0]);
	}
	else
		printf("\n");
	printf("%d",x);
}
