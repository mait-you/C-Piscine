/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:39:53 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/13 04:13:40 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cp;
	int		i;

	i = 0;
	cp = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!cp)
		return (0);
	while (src[i])
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
/*
#include <stdio.h>

int main()
{
	char *x;

	x = ft_strdup("dsfs ");

	printf("%s", x);
}
*/
