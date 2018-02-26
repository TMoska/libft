/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <tmoska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:29:14 by tmoska            #+#    #+#             */
/*   Updated: 2018/02/25 22:40:55 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(uint64_t nb)
{
	char	hex[16];
	int		tmp;
	int		i;

	ft_bzero(hex, 16);
	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		nb /= 16;
		i++;
	}
	ft_putstr("0x");
	while (i >= 0)
	{
		ft_putchar(hex[i]);
		i--;
	}
}
