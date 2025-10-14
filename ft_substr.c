/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:17:38 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/14 14:53:10 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	s_len;
	size_t	actual_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		r = (char *)malloc(1);
		if (!r)
			return (NULL);
		r[0] = '\0';
		return (r);
	}
	if (s_len - start < len)
		actual_len = s_len - start;
	else
		actual_len = len;
	r = (char *)malloc(actual_len + 1);
	if (!r)
		return (NULL);
	while (i < actual_len)
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
