/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:15:03 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/13 11:45:48 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchar(char const *str, char const c)
{
	int	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*r;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && ft_strchar(set, s1[start]))
		start++;

	end = 0;
	i = 0;
	while (s1[i])
		i++;
	end = i - 1;

	while (end >= start && ft_strchar(set, s1[end]))
		end--;

	// Tamaño del string resultante
	i = end - start + 1;

	if (i <= 0)
		i = 0;

	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);

	i = 0;
	while (start <= end)
		r[i++] = s1[start++];
	r[i] = '\0';

	return (r);
}
/*
int	main(void)
{
	printf("%s",ft_strtrim("123Hola321", "123"));
	return (0);
}*/
