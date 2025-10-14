/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:34:06 by garakizt          #+#    #+#             */
/*   Updated: 2025/07/19 19:43:38 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;

	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	i = 0;
	while (src[i])
		i++;

	return (i);
}
/*
int	main(void)
{
	char	src[] = "Hola";
	int	size = 0;
	char	dest[size];

	ft_strlcpy(dest, src, size);
	return (0);
}*/
