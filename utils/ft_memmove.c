/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 04:19:15 by hraad             #+#    #+#             */
/*   Updated: 2024/08/12 06:45:47 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	void	*ft_memcpy_rev(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = n;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
		return (ft_memcpy_rev(dest, src, n));
	return (dest);
}
