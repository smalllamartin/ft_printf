/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 12:04:56 by exam              #+#    #+#             */
/*   Updated: 2017/12/23 22:47:33 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "hex.h"

int		get_len_intmax_t(int i, uintmax_t nbr, int base)
{
	while (nbr)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	int		i;
	int		nbr;

	nbr = value;
	while (!(i = 0) && nbr)
	{
		nbr = nbr / base;
		i++;
	}
	if (value < 0 && base == 10)
		++i;
	if (!(str = ft_memalloc(i + 1)))
		exit(0);
	nbr = value;
	nbr = nbr < 0 ? -nbr : nbr;
	str[i--] = '\0';
	while (nbr)
	{
		str[i--] = g_hex[nbr % base];
		nbr = nbr / base;
	}
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}

char	*ft_itoa_base_uintmax_t(uintmax_t value, int base)
{
	char		*str;
	int			i;
	uintmax_t	nbr;

	i = value ? 0 : 1;
	nbr = value;
	while (nbr)
	{
		nbr = nbr / base;
		i++;
	}
	if (!(str = ft_memalloc(i + 1)))
		exit(0);
	nbr = value;
	str[i--] = '\0';
	while (nbr)
	{
		str[i--] = g_hex[nbr % base];
		nbr = nbr / base;
	}
	str[0] = value ? str[0] : '0';
	return (str);
}

char	*ft_itoa_base_intmax_t(intmax_t value, int base)
{
	char		*str;
	int			i;
	uintmax_t	nbr;
	int			signe;

	i = value ? 0 : 1;
	signe = value < 0 ? 1 : 0;
	nbr = value < 0 ? -value : value;
	i = get_len_intmax_t(i, nbr, base);
	if (value < 0)
		++i;
	if (!(str = ft_memalloc(i + 1)))
		exit(0);
	nbr = value < 0 ? -value : value;
	str[i--] = '\0';
	while (nbr)
	{
		str[i--] = g_hex[nbr % base];
		nbr = nbr / base;
	}
	if (value < 0)
		str[0] = '-';
	str[0] = value ? str[0] : '0';
	return (str);
}
