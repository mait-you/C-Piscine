/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:46:01 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/13 04:17:16 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*x;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	x = malloc(sizeof(int) * size);
	if (!x)
		return (NULL);
	i = 0;
	while (i < size)
	{
		x[i] = min++;
		i++;
	}
	return (x);
}

/*
#include <stdio.h>

int main()
{
	int *x;
	int i;

	x = ft_range(-4, -4);
	i = 0;
	while (i < 9)
	{
		printf("%d", x[i]);
		i++;
	}
}
*/
