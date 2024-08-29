/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 00:39:24 by hraad             #+#    #+#             */
/*   Updated: 2024/08/21 21:39:00 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	isfound(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && isfound(*start, set))
		++start;
	while (start < end && isfound(*(end - 1), set))
		--end;
	ptr = ft_substr(start, 0, end - start);
	return (ptr);
}

static	int	isfound(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
		if (c == set[i++])
			return (1);
	return (0);
}
