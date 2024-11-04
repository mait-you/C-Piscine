/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:55:48 by mait-you          #+#    #+#             */
/*   Updated: 2024/08/13 04:02:55 by mait-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	c_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (i < size)
	{
		x += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	x -= ft_strlen(sep);
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	int		i;
	int		j;
	int		c;
	int		total_len;

	if (size == 0 || strs == NULL)
		return (NULL);
	total_len = c_total_len(size, strs, sep);
	r = malloc(sizeof(char) * total_len + 1);
	if (r == NULL)
		return (0);
	i = 0;
	c = 0;
	while (i++ < size)
	{
		j = 0;
		while (strs[i][j])
			r[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			r[c++] = sep[j++];
	}
	r[c] = '\0';
	return (r);
}
/*
#include <stdio.h>

int main()
{
	char *strs[] = {"qwrD", "areg", "arg", "wr", "ere", "rstysr"};
    char *sep = "{-<|>-}";
    char *result = ft_strjoin(0, strs, sep);
    if (result)
        printf("%s\n", result);
    free(result);
}
*/
