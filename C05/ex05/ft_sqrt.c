/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:54:35 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/12 00:09:48 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
