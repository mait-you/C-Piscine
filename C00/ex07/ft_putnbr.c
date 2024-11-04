/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:56:35 by mait-you          #+#    #+#             */
/*   Updated: 2024/07/26 11:00:56 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	x;
	int	y;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		x = nb / 10;
		y = nb % 10;
		ft_putnbr(x);
		ft_putnbr(y);
	}
	else
	{
		x = 48 + nb;
		write(1, &x, 1);
	}
}
