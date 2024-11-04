/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:02:33 by mait-you          #+#    #+#             */
/*   Updated: 2024/07/26 11:09:34 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if(int i, int j, int n)
{
	if (!(i == 55 && j == 56 && n == 57))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	n;

	i = 48;
	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			n = j + 1;
			while (n <= 57)
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &n, 1);
				ft_if(i, j, n);
				n++;
			}
			j++;
		}
		i++;
	}
}
