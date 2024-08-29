/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 03:51:22 by hraad             #+#    #+#             */
/*   Updated: 2024/08/12 05:35:43 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*skip_space(const char *nptr)
{
	int	i;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	return ((char *)(nptr + i));
}

static	int	calc_sign(const char *nptr)
{
	int	sign;
	int	count;
	int	i;

	sign = 1;
	count = 0;
	i = 0;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		count++;
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	if (count > 1)
		return (0);
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	sum;
	int				sign;
	char			*ptr;

	i = 0;
	ptr = skip_space(nptr);
	sign = calc_sign(ptr);
	sum = 0;
	while (ptr[i] == '-' || ptr[i] == '+')
		i++;
	while (ft_isdigit(ptr[i]) && ptr[i] != '\0')
	{
		sum = sum * 10 + (ptr[i] - '0');
		i++;
	}
	return (sign * sum);
}
