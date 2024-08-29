/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:48:32 by hraad             #+#    #+#             */
/*   Updated: 2024/08/29 02:42:39 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/libft.h"

int	print_string(char *str)
{
	size_t	count;

	count = ft_strlen(str);
	ft_putstr(str);
	return (count);
}

int	put_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	put_int(int num)
{
	int	count;

	count = 0;
	ft_putnbr_fd(num, 1);
	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

int	print_percent(void)
{
	char	c;

	c = 'n';
	ft_putchar_fd('%', 1);
	return (1);
}

int	put_unsigned(unsigned int n)
{
	int	cout;

	count = 0;
	if (n > 9)
		count += put_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	return (count + 1);
}
