/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:52:52 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/08 21:01:09 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cd(char *str, char c, int p)
{
	int i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int j;
	i = 0;
	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				if (cd(av[1], av[1][j], i) == 1)
				{
					printf("%c", av[1][i]);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}
