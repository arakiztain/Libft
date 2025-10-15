/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:19:13 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/13 13:06:59 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int nbr)
{
	int	i;

	i = 0;
	if (nbr != 0)
	{
		if (nbr < 0)
		{
			nbr = nbr *(-1);
			i++;
		}
		while (nbr != 0)
		{
			nbr = nbr / 10;
			i++;
		}
	}
	else
		i = 1;
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	char	*r;

	n = nbr;
	len = count(n);
	r = (char *)malloc(sizeof(char) * (len + 1));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	if (n == 0)
		return (r[0] = '0', r[1] = '\0', r);
	else if (n < 0)
	{
		r[0] = '-';
		n = -n;
	}
	len--;
	while (n != 0)
	{
		r[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (r);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(0));
	return (0);
}*/
