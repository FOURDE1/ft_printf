/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:35:26 by hraad             #+#    #+#             */
/*   Updated: 2024/08/20 14:35:32 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	b;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		b = -n;
	}
	else
		b = n;
	if (b < 10)
		ft_putchar_fd((b + '0'), fd);
	else
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putchar_fd(b % 10 + '0', fd);
	}
}
