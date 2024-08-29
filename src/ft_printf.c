/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:59:15 by hraad             #+#    #+#             */
/*   Updated: 2024/08/29 23:55:19 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static	int	eprintf(char format, va_list args);

int	ft_printf(const char *format, ...)
{
	int		full_size;
	va_list	lst;
	int		i;

	va_start(lst, format);
	full_size = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			full_size++;
		}
		else
			full_size += eprintf(format[++i], lst);
		i++;
	}
	va_end(lst);
	return (full_size);
}

static	int	eprintf(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count += put_int(va_arg(args, int));
	else if (format == 's')
		count += print_string(va_arg(args, char *));
	else if (format == 'c')
		count += put_char((char)va_arg(args, int));
	else if (format == 'u')
		count += put_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += put_hexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
		count += put_pointer(va_arg(args, void *));
	else if (format == '%')
		count += print_percent();
	return (count);
}
