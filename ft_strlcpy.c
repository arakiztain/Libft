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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while (*src != '\0' && (i + 1 < size))
	{
		dest[i] = *src;
		src++;
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (len);
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
