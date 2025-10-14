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
	int	start;
	int	end;
	int	i;
	int	j;

	start = ft_strlen(s1);
	end = ft_strlen(s2);
	r = malloc(sizeof(char) * (start + end + 1));
	if (!r)
		return (NULL);
	i = 0;
	j = 0;
	while (i < start)
	{
		r[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < end)
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
