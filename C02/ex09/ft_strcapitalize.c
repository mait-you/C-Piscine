/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:32:53 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/12 09:36:30 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	id;

	i = 0
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
            str[i] += 32;
			i++;
	}
	id = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && id == 1)
		{
			str[i] -= 32;
			id = 0;
		}
		else if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			id = 1;
		else
			id = 0;
		i++;
	}
	return (str);
}
