/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:36:21 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/13 04:22:07 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (i < size)
	{
		tab[i] = min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int main()
{
	int *tab;
	int min = -9;
	int max = -3;
	int i = 0;

	int size = ft_ultimate_range(&tab, min, max);

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
