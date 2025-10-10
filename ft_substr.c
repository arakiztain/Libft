/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:17:38 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/10 11:52:25 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;


	if (start >= ft_strlen(s))
	{
		r = malloc(1);
		if (!r)
			return (NULL);
		r[0] = '\0';
		return (r);
	}
	i = 0;
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
int	main(void)
{
	printf("%s", ft_substr("hola mundo", 6, 3));
}*/
