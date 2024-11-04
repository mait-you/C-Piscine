/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 14:16:29 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/11 22:04:32 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (--x > 0)
			nb *= x;
		return (nb);
	}
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(5));
}
*/
