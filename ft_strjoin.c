/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:52:46 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/10 13:15:05 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;
	size_t	j;

	r = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		r[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		r[j] = s2[i];
		i++;
		j++;
	}
	r[j] = '\0';
	return (r);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("hola ", "mundo"));
}*/
