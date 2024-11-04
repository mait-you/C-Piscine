/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:14:41 by aelkarch          #+#    #+#             */
/*   Updated: 2024/07/28 15:40:51 by aelkarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	h;
	int	v;

	v = 1;
	while (v <= y && x > 0 && y > 0)
	{
		h = 1;
		while (h <= x)
		{
			if ((v == 1 && h == 1) || (v == y && h == x) && x != 1 && y != 1)
				ft_putchar('/');
			else if ((v == 1 && h == x) || (v == y && h == 1))
				ft_putchar('\\');
			else if ((v == 1 && h < x) || (v == y && h < x))
				ft_putchar('*');
			else if ((h == 1 && v < y) || (h == x && v < y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			h++;
		}
		v++;
		ft_putchar('\n');
	}
}
