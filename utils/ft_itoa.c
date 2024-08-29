/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:10:31 by hraad             #+#    #+#             */
/*   Updated: 2024/08/22 02:23:35 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count(int n);

static void	fill_str(char *str, unsigned int num, int size);

char	*ft_itoa(int n)
{
	char			*ptr;
	int				size;
	unsigned int	num;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = count(n);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[size] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		num = -n;
	}
	else
		num = n;
	fill_str(ptr, num, size);
	return (ptr);
}

static int	count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fill_str(char *str, unsigned int num, int size)
{
	str[size] = '\0';
	while (num > 0)
	{
		str[--size] = (num % 10) + '0';
		num /= 10;
	}
}
