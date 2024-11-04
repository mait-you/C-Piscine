/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:46:22 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/05 09:52:40 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = x;
		i++;
	}
}
