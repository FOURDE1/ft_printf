/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:16:04 by hraad             #+#    #+#             */
/*   Updated: 2024/08/30 00:35:11 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../utils/libft.h"

int	print_string(char *str);
int	put_char(char c);
int	put_int(int num);
int	print_percent(void);
int	put_unsigned(unsigned int n);
int	put_hexa(unsigned int num, char format);
int	put_pointer(void *ptr);
int	ft_printf(const char *format, ...);

#endif
