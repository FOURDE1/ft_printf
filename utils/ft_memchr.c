/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 02:02:35 by hraad             #+#    #+#             */
/*   Updated: 2024/08/12 02:10:46 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	d;

	i = 0;
	ptr = (unsigned char *)s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == d)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}
