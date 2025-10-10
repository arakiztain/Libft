/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garakizt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:04:53 by garakizt          #+#    #+#             */
/*   Updated: 2025/10/10 11:16:53 by garakizt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t mem, size_t size)
{
	void	*ptr;

	if (mem == 0 || size == 0)
		return (malloc(0);
	if ((ptr == malloc(mem * size)) == NULL)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, mem * size);
	return (ptr);
}
