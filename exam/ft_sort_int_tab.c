
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[j+1])
			{
				swp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = swp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int x[] = {3, 3, 6, 1, -7};
	ft_sort_int_tab(x, 5);
	printf("%d %d %d %d %d", x[0], x[1], x[2], x[3], x[4]);
}
