/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:05:22 by garakizt          #+#    #+#             */
/*   Updated: 2025/07/16 17:08:43 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;
	size_t	r;

	i = 0;
	r = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size > d)
		r = d + s;
	else
		r = s + size;
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (r);
}
/*
int	main(void)
{
	char	dest[] = "Test";
	char	src[] = "Test";
	unsigned int	size = 10;

	ft_strlcat(dest, src, size);
	return (0);
}*/
