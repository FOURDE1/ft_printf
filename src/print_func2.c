/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:44:50 by hraad             #+#    #+#             */
/*   Updated: 2024/09/01 23:18:54 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/libft.h"

int	put_hexa(unsigned long num, char format)
{
	const char	*hexa;
	int			count;

	count = 0;
	if (format == 'x')
		hexa = "0123456789abcdef";
	else if (format == 'X')
		hexa = "0123456789ABCDEF";
	else
		return (-1);
	if (num >= 16)
		count = put_hexa(num / 16, format);
	ft_putchar_fd(hexa[num % 16], 1);
	return (count + 1);
}

int	put_pointer(void *ptr)
{
	int				sum;
	unsigned long	address;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	sum = 2;
	ft_putstr_fd("0x", 1);
	address = (unsigned long)ptr;
	sum += put_hexa(address, 'x');
	return (sum);
}
